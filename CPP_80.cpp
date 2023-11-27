#include <string>

bool is_happy(string s){
    if(s.length() < 3)
        return false;
    
    for(int i = 0; i < s.length() - 2; i++){
        if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2])
            return false;
    }
    
    return true;
}

int main() {
    // Add test cases here
    
    // Test case 1: "abc"
    // Expected output: true
    string s1 = "abc";
    bool result1 = is_happy(s1);
    // Test case 2: "aab"
    // Expected output: false
    string s2 = "aab";
    bool result2 = is_happy(s2);
    // Test case 3: "xyz"
    // Expected output: true
    string s3 = "xyz";
    bool result3 = is_happy(s3);
    
    return 0;
}