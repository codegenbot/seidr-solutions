```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result = "";
    for (char c_s : s) {
        bool found = false;
        for (char c_c : c) {
            if (c_s == c_c) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += c_s;
        }
    }
    std::string temp = result;
    std::reverse(temp.begin(), temp.end());
    std::vector<std::string> res;
    res.push_back(result);
    if (result == temp) {
        res.push_back("True");
    } else {
        res.push_back("False");
    }
    return res;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}