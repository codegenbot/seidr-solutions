#include <string>
#include <cassert>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    int subLen = substring.length();
    int strLen = str.length();

    for (int i = 0; i <= strLen - subLen; i++) {
        bool found = true;

        for (int j = 0; j < subLen; j++) {
            if (str[i + j] != substring[j]) {
                found = false;
                break;
            }
        }

        if (found) {
            count++;
        }
    }

    return count;
}

int main() {
    assert(how_many_times("john doe", "john") == 1);
    assert(how_many_times("hello world", "o") == 2);
    assert(how_many_times("mississippi", "ss") == 2);
    assert(how_many_times("banana", "ana") == 2);
    assert(how_many_times("abcabcabc", "abc") == 3);

    return 0;
}