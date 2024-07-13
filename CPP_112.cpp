#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<char> v;
    for (char x : s) {
        bool flag = false;
        for (char y : c) {
            if (x == y) {
                flag = true;
                break;
            }
        }
        if (!flag)
            v.push_back(x);
    }
    std::string result = "";
    for (char x : v) {
        result += x;
    }
    
    std::string temp = result;
    std::reverse(temp.begin(), temp.end());
    if (result == temp) {
        return {{"", "True"}};
    } else {
        return {{"", "False"}};
    }
}

int main() {
    // Your code here
    return 0;
}