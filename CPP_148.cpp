#include <vector>
#include <string>

using namespace std;

std::vector<std::string> bf(std::string a, std::string b) {
    std::vector<std::string> result;
    for (int i = 0; i < a.size(); i++) {
        string temp = "";
        for (int j = 0; j <= i; j++) {
            if (j < b.size() && j < a.size() && b[j] == a[i]) {
                temp += b[j];
            } else {
                temp += "*";
            }
        }
        result.push_back(temp);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}