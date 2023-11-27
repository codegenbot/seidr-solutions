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
    string str = "abababa";
    string substring = "aba";
    
    int result = how_many_times(str, substring);
    
    return 0;
}