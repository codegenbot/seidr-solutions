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
    string test3 = "xyz";
    
    if(is_happy(test1))
        cout << test1 << " is happy" << endl;
    else
        cout << test1 << " is not happy" << endl;
    
    if(is_happy(test2))
        cout << test2 << " is happy" << endl;
    else
        cout << test2 << " is not happy" << endl;
    
    if(is_happy(test3))
        cout << test3 << " is happy" << endl;
    else
        cout << test3 << " is not happy" << endl;
    
    return 0;
}