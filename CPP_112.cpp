#include <iostream>
#include <vector>
#include <algorithm>

bool issame(char a, char b) {
    if ((a == 'R' && b == 'r') || (a == 'r' && b == 'R'))
        return true;
    else
        return false;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string temp = "";
    for (char x : s) {
        bool flag = false;
        for (char y : c) {
            if (x == y && !issame(x, y)) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            temp += x;
        }
    }
    std::vector<std::string> result;
    std::string str1 = temp;
    std::reverse(str1.begin(), str1.end());
    std::string str2 = temp;
    if (str1 == str2)
        result.push_back("True");
    else
        result.push_back("False");
    result.push_back(temp);
    return result;
}