#include <string>

int how_many_times(string str, string substring) {
    int count = 0;
    int subLen = substring.length();
    int strLen = str.length();
    
    if (subLen > strLen) {
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
    // test cases
    string str1 = "abcabcabc";
    string substring1 = "abc";
    int result1 = how_many_times(str1, substring1);
    string str2 = "hello world";
    string substring2 = "o";
    int result2 = how_many_times(str2, substring2);
    
    return 0;
}