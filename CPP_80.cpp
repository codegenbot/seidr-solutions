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
    cout << is_happy("abc") << endl; // Expected: true
    cout << is_happy("aab") << endl; // Expected: false
    cout << is_happy("xyz") << endl; // Expected: true
    cout << is_happy("aaa") << endl; // Expected: false
    cout << is_happy("abab") << endl; // Expected: false
    
    return 0;
}