#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in string c for efficient lookup
    set<char> cSet(c.begin(), c.end());
    
    // Initialize an empty string to store the filtered characters
    string filteredS = "";
    
    // Iterate over each character in string s
    for (char c : s) {
        // If the character is not in the set of characters from string c, add it to the filtered string
        if (cSet.find(c) == cSet.end()) {
            filteredS += c;
        }
    }
    
    // Check if the filtered string is a palindrome
    string reversedFilteredS = filteredS;
    reverse(reversedFilteredS.begin(), reversedFilteredS.end());
    bool isPalindrome = filteredS == reversedFilteredS;
    
    // Add the filtered string and "True" or "False" to the result vector
    result.push_back(filteredS);
    if (isPalindrome) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}