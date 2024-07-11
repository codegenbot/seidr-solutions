#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in c for O(1) lookup time
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in s
    for (char ch : s) {
        // If the character is not in c, add it to the temporary string
        if (c_set.find(ch) == c_set.end()) {
            temp += ch;
        }
    }
    
    // Check if the temporary string is a palindrome
    bool is_palindrome = true;
    for (int i = 0; i < temp.length() / 2; i++) {
        if (temp[i] != temp[temp.length() - i - 1]) {
            is_palindrome = false;
            break;
        }
    }
    
    // Add the result string and a boolean indicating whether it's a palindrome to the vector
    result.push_back(temp);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}