#include <iostream>
#include <cassert>
#include <algorithm>

std::string solve(const std::string& s) {
    std::string str = s;
    for (int i = 0; i < str.size(); i++) {
        if (isalpha(str[i])) {
            if (islower(str[i])) {
                str[i] = toupper(str[i]);
            } else {
                str[i] = tolower(str[i]);
            }
        }
    }
    int left = 0, right = str.size() - 1;
    while (left < right) {
        std::swap(str[left], str[right]);
        left++;
        right--;
    }
    return str;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    
    return 0;
}