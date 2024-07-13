```
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> issame(string s, string c) {
    vector<string> result;
    if (s.length() != c.length()) {
        return {{"False", ""}};
    }
    for (int i = 0; i < s.length(); i++) {
        bool flag = false;
        for (char x : c) {
            if (s[i] == x) {
                flag = true;
                break;
            }
        }
        if (!flag)
            result.push_back(s.substr(i, 1));
    }
    string temp = "";
    for (char x : s) {
        bool flag = false;
        for (char y : c) {
            if (x == y) {
                flag = true;
                break;
            }
        }
        if (!flag)
            temp += x;
    }
    
    reverse(temp.begin(), temp.end());
    if (temp == s) {
        return {{"True", temp}};
    } else {
        return {{"False", temp}};