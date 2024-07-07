#include <string>
#include <vector>
#include <algorithm>

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in string c for efficient lookup
    set<char> cSet(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in string s
    for (char ch : s) {
        // If the current character is not in the set of characters in string c, add it to the temporary string
        if (cSet.find(ch) == cSet.end()) {
            temp += ch;
        }
    }
    
    // Check if the result string is palindrome
    bool isPalindrome = (temp == std::string(temp.rbegin(), temp.rend()));
    
    // Add the result string and "True"/"False" to the vector
    result.push_back(temp);
    result.push_back((isPalindrome) ? "True" : "False");
    
    return result;
}