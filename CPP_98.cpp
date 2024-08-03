#include <iostream>
#include <string>
#include <cctype>

int count_upper(std::string s){
    int count = 0;
    for (int i = 0; i < s.size(); i += 2) {
        if (std::isupper(s[i]) && (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 2);
    return 0;
}