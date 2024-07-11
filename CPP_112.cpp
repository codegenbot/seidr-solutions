#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in string c for efficient lookup
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in string s
    for (char ch : s) {
        // If the character is not in the set of characters in string c, add it to the temporary string
        if (c_set.find(ch) == c_set.end()) {
            temp += ch;
        }
    }
    
    // Check if the temporary string is a palindrome
    bool is_palindrome = (temp == reverse(temp));
    
    // Append the result strings and "True"/"False" to the vector
    result.push_back(temp);
    result.push_back(is_palindrome ? "True" : "False");
    
    return result;
}