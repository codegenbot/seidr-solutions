#include <iostream>
#include <vector>
#include <cassert>

bool issame(int num, std::vector<std::string> strings) {
    return num == strings.size();
}

int odd_count(std::vector<std::string> strings) {
    int count = 0;
    for (const std::string& str : strings) {
        for (char c : str) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(issame(3, {"abc", "def", "ghi", "123", "456"}));
    assert(odd_count({"271", "137", "314"}) == 3);

    return 0;
}