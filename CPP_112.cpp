```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string temp = "";
    for (char i : s) {
        bool found = false;
        for (char j : c) {
            if (i == j) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += i;
        }
    }
    result.push_back(temp);
    std::string reverse = temp;
    reverse.resize(reverse.size());
    std::reverse(reverse.begin(), reverse.end());
    if (temp == reverse) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}