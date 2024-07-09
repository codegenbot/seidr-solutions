#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in the string s
    for (char ch : s) {
        bool found = false;
        
        // Check if the current character is present in the string c
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        
        // If the character is not present in the string c, add it to the temp string
        if (!found) {
            temp += ch;
        }
    }
    
    // Check if the temp string is palindrome
    bool is_palindrome = (temp == reverse(temp));
    
    // Add the result and "True"/"False" to the vector
    result.push_back(temp);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}