#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in string c for efficient lookup
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in string s
    for (char c : s) {
        // If the character is not in string c, add it to the temporary string
        if (c_set.find(c) == c_set.end()) {
            temp += c;
        }
    }
    
    // Check if the temporary string is a palindrome
    bool is_palindrome = true;
    int start = 0, end = temp.length() - 1;
    while (start < end) {
        if (temp[start] != temp[end]) {
            is_palindrome = false;
            break;
        }
        start++;
        end--;
    }
    
    // Add the result string and palindrome status to the vector
    result.push_back(temp);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}