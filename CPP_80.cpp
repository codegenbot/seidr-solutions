#include <cassert>
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

int main() {
    assert(is_happy("iopaxioi") == false);
    assert(is_happy("abcde") == true);
    
    // Add more test cases as needed

    return 0;
}