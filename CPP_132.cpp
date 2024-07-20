#include <string>

bool is_nested(std::string); // Function declaration before its definition

int main() {
    std::cout << (is_nested("[[[[]]]]") ? "true" : "false") << std::endl;
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