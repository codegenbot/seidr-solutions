#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> bf(std::string a, std::string b) {
    int countA = 0;
    int countB = 0;

    for(int i = 0; i < a.size(); i++) {
        if(a[i] == 'a')
            countA++;
        else
            countB++;
    }

    for(int i = 0; i < b.size(); i++) {
        if(b[i] == 'a')
            countA++;
        else
            countB++;
    }

    std::vector<std::string> result;

    while(countA > 0 && countB > 0) {
        result.push_back("aab");
        countA -= 2;
        countB -= 2;
    }

    if(countA > 0) {
        for(int i = 0; i < countA; i++) {
            result.push_back("a");
        }
    }

    if(countB > 0) {
        for(int i = 0; i < countB; i++) {
            result.push_back("b");
        }
    }

    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}