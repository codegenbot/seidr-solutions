#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> bf(std::string a, std::string c) {
    int i = 0;
    while(i < a.length()) {
        if(c[i] == '1') {
            if(i == 0 || a[i-1] == '0' || a[i] != '1') {
                if(i > 0) { 
                    std::string temp = "";
                    for(int j = i; j >= 0; j--) {
                        temp += (a[j] == '1') ? "10" : "11";
                        i--;
                    }
                    a = temp;
                } else {
                    a.insert(a.begin(), "11");
                }
            } else {
                if(i > 0) { 
                    std::string temp = "";
                    for(int j = i; j >= 0; j--) {
                        temp += (a[j] == '1') ? "10" : "11";
                        i--;
                    }
                    a = temp;
                } else {
                    a.insert(a.begin(), "1");
                }
            }
        }
        i++;
    }
    std::vector<std::string> result;
    for(int i = 0; i < a.length(); i += 2) {
        result.push_back(a.substr(i, 2));
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