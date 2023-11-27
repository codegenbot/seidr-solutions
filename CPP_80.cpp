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
    string test1 = "abc";
    string test2 = "aab";
    string test3 = "abb";
    
    cout << is_happy(test1) << endl; // Expected output: 1 (true)
    cout << is_happy(test2) << endl; // Expected output: 0 (false)
    cout << is_happy(test3) << endl; // Expected output: 0 (false)
    
    return 0;
}