#include <string>
#include <cassert>

bool is_nested(const std::string str) {
    int count = 0;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] == '[') {
            count++;
        } else if (str[i] == ']' && count > 0) {
            count--;
        }
    }
    return count == 0;
}

int main() {
    assert(is_nested("]]]]]]]]") == false);
    return 0;
}