#include <iostream>
#include <vector>
#include <cassert>

bool issame(int count, std::vector<std::string> strings) {
    return count == strings.size();
}

int odd_count(std::vector<std::string> strings) {
    int count = 0;
    for (const std::string& str : strings) {
        for (char c : str) {
            if (isdigit(c) && (c - '0') % 2 == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(issame(3, {"abc", "def", "ghi", "123", "456"}));
    assert(issame(odd_count({"271", "137", "314"}), { "true" });

    return 0;
}