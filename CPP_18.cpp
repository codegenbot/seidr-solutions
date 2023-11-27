#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    int subLen = substring.length();
    int strLen = str.length();

    if (subLen == 0) {
        return 0;
    }

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
    
    // Additional test cases
    assert(how_many_times("abcabcabc", "abc") == 3);
    assert(how_many_times("abcdefg", "xyz") == 0);
    
    return 0;
}