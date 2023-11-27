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
    string s1 = "hello";
    string s2 = "world";
    string s3 = "happy";
    
    cout << is_happy(s1) << endl; // Output: true
    cout << is_happy(s2) << endl; // Output: false
    cout << is_happy(s3) << endl; // Output: true
    
    return 0;
}