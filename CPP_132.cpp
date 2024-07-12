```cpp
#include <string>

bool is_nested(const char* str) {
    int count = 0;
    for (char c : std::string(str)) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 0) {
                count--;
            }
        }
    }
    return count != 0;
}

int main() {
    assert(is_nested("]]]]]]]]") == false);
}