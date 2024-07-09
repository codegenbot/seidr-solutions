```cpp
#include <string>

bool is_happy(std::string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        std::string sub = s.substr(i, 3);
        bool found = false;
        for (auto c : sub) {
            if (s.find(c) != std::string::npos) {
                found = true;
                break;
            }
        }
        if (found)
            return false;
    }
    return true;
}

int main() {
    assert(is_happy("iopaxioi") == true );
    return 0;
}