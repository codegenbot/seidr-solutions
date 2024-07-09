```cpp
#include <string>

bool is_happy(std::string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        std::string sub = (char*)s.c_str()+i;
        sub.resize(3);
        bool found = false;
        for (auto c : sub) {
            if ((char*)s.c_str() != (char*)sub.c_str()) {
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