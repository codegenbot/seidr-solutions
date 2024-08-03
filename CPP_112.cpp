#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in c for efficient lookup
    set<char> cSet(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string res = "";
    
    // Iterate over each character in s
    for (char ch : s) {
        // If the character is not in c, add it to the result
        if (cSet.find(ch) == cSet.end()) {
            res += ch;
        }
    }
    
    // Check if the result string is palindrome
    bool isPalindrome = true;
    for (int i = 0; i < res.length() / 2; i++) {
        if (res[i] != res[res.length() - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    
    // Store the result and palindrome status in a vector
    result.push_back(res);
    result.push_back((isPalindrome ? "True" : "False"));
    
    return result;
}