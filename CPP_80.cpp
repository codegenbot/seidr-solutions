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
    // Test cases
    string s1 = "hello";
    string s2 = "world";
    string s3 = "happy";
    
    cout << is_happy(s1) << endl; // Expected output: true
    cout << is_happy(s2) << endl; // Expected output: false
    cout << is_happy(s3) << endl; // Expected output: true
    
    return 0;
}