#include <string>
using namespace std;

string solve(string s) {
    string result = ""; // initialize an empty string to store the result
    bool hasLetters = false; // flag to check if the string contains any letters
    
    // iterate through each character in the string
    for (int i = 0; i < s.length(); i++) {
        // check if the character is a letter
        if (isalpha(s[i])) {
            hasLetters = true; // set the flag to true
            
            // reverse the case of the letter
            if (islower(s[i])) {
                result += toupper(s[i]); // convert lowercase to uppercase
            } else {
                result += tolower(s[i]); // convert uppercase to lowercase
            }
        } else {
            result += s[i]; // if the character is not a letter, keep it as it is
        }
    }
    
    // if the string contains no letters, reverse the string
    if (!hasLetters) {
        reverse(result.begin(), result.end());
    }
    
    return result; // return the resulted string
}