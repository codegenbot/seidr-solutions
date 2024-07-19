#include <iostream>
#include <string>
#include <unordered_set>

bool is_happy(const std::string& str) {
    std::unordered_set<char> seen;

    for (char c : str) {
        if (seen.count(c) > 0) {
            return false;
        }
        seen.insert(c);
    }

    return true;
}