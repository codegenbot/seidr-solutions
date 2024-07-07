#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in string c for efficient lookup
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string res = "";
    
    // Iterate over each character in string s
    for (char ch : s) {
        // Check if the character is not in the set of characters in string c
        if (c_set.find(ch) == c_set.end()) {
            // If it's not, add it to the result string
            res += ch;
        }
    }
    
    // Check if the result string is the same when reversed
    bool is_palindrome = (res == reverse(res));
    
    // Add the result string and palindrome check to the vector
    result.push_back(res);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}