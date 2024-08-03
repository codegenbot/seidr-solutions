#include <iostream>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 0 && (s[i] >= 'A' && s[i] <= 'E') || (s[i] >= 'a' && s[i] <= 'u')) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 4);
    return 0;
}