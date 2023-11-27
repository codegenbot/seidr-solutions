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
    
    // Test case 1: Happy string
    string happyString = "abc";
    bool isHappyString = is_happy(happyString);
    cout << "Is '" << happyString << "' a happy string? " << (isHappyString ? "Yes" : "No") << endl;
    
    // Test case 2: Unhappy string
    string unhappyString = "aab";
    bool isUnhappyString = is_happy(unhappyString);
    cout << "Is '" << unhappyString << "' a happy string? " << (isUnhappyString ? "Yes" : "No") << endl;
    
    // Test case 3: Empty string
    string emptyString = "";
    bool isEmptyString = is_happy(emptyString);
    cout << "Is '" << emptyString << "' a happy string? " << (isEmptyString ? "Yes" : "No") << endl;
    
    return 0;
}