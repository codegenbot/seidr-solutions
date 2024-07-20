```cpp
#include <string>

bool is_nested(std::string);

int main() {
    std::cout << std::boolalpha;
    cout << is_nested("]]]")) << endl;
    cout << is_nested("[[[") << endl;
    cout << is_nested("[]") << endl;
    cout << is_nested("[][]") << endl;
    cout << is_nested("[][][]") << endl;
    return 0;
}

bool is_nested(std::string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 0) {
                count--;
            } else {
                return false;
            }
        }
    }
    return count > 0;
}