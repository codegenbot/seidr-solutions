#include <algorithm>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in c for efficient look up
    set<char> cSet(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string res = "";
    
    // Iterate over each character in s
    for (char c : s) {
        // If the character is not in c, add it to the result
        if (cSet.find(c) == cSet.end()) {
            res += c;
        }
    }
    
    // Check if the reversed string is equal to the original string
    bool isPalindrome = res == string(res.rbegin(), res.rend());
    
    // Add the result and palindrome status to the vector
    result.push_back(res);
    result.push_back(isPalindrome ? "True" : "False");
    
    return result;
}