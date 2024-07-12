#include <iostream>
#include <string>

int count_upper(string s) {
    int count = 0;
    for (int i = 1; i < s.size(); i += 2) {
        if (isupper(s[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 4);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}