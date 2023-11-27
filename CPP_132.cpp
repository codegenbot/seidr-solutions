#include <iostream>
#include <string>

bool isNested(std::string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '[') {
            count++;
        } else if (str[i] == ']') {
            count--;
        }
        if (count < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(isNested("]]]]]]]]") == false);
    assert(isNested("[[[]]]") == false);
    assert(isNested("]]]][][][[[]]") == true);
    assert(isNested("[[[]]][][[[]]") == false);
    assert(isNested("[][][][][]") == false);
    return 0;
}