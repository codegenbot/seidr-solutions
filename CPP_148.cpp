#include <vector>
#include <string>
#include <algorithm>
using namespace std;

std::vector<std::string> bf(std::string a, std::vector<std::string> second) {
    int i = 0;
    while (i < a.size()) {
        string temp = "";
        for (int j = i; j < a.size(); j++) {
            temp += a[j];
            if (j == a.size() - 1 || a[j + 1] != a[i]) {
                second.push_back(temp);
                temp = "";
                i = j;
                break;
            }
        }
    }
    return second;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}