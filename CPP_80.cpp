#include <iostream>
#include <string>
#include <unordered_set>
#include <cassert>

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

int main() {
    assert(is_happy("iopaxioi") == false);
    assert(is_happy("abcde") == true);
    // Add more test cases here

    return 0;
}