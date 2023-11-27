#include <string>

int how_many_times(std::string str, std::string substring) {
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
    // Test cases
    std::string str1 = "abcabcabc";
    std::string substring1 = "abc";
    int result1 = how_many_times(str1, substring1);
    // Expected output: 3
    
    std::string str2 = "banana";
    std::string substring2 = "na";
    int result2 = how_many_times(str2, substring2);
    // Expected output: 2
    
    std::string str3 = "hello world";
    std::string substring3 = "foo";
    int result3 = how_many_times(str3, substring3);
    // Expected output: 0
    
    return 0;
}