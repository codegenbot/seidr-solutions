#include <iostream>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0 && isupper(s[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str = "EEEE";
    assert(count_upper(str) == 2);
    return 0;
}