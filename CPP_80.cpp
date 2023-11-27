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
    string s1 = "abc";
    string s2 = "aab";
    string s3 = "xyz";
    
    cout << is_happy(s1) << endl; // Expected output: 1 (true)
    cout << is_happy(s2) << endl; // Expected output: 0 (false)
    cout << is_happy(s3) << endl; // Expected output: 1 (true)
    
    return 0;
}