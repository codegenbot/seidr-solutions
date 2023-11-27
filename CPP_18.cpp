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
    // Test cases
    string str1 = "ababab";
    string sub1 = "aba";
    int result1 = how_many_times(str1, sub1);
    // Expected output: 2
    
    string str2 = "hello world";
    string sub2 = "o";
    int result2 = how_many_times(str2, sub2);
    // Expected output: 2
    
    string str3 = "abcde";
    string sub3 = "xyz";
    int result3 = how_many_times(str3, sub3);
    // Expected output: 0
    
    return 0;
}