#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int odd_count(const std::vector<std::string>& strs) {
    int count = 0;
    for(const std::string& str : strs) {
        for(char c : str) {
            count += (c - '0') % 2 != 0;
        }
    }
    return count;
}

int main() {
    assert(odd_count({"271", "137", "314"}) == 4);
    return 0;
}