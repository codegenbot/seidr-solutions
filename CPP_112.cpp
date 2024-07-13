#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in string c for efficient lookup
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string res = "";
    
    // Iterate over each character in string s
    for (char ch : s) {
        // If the character is not in set c, add it to the result
        if (c_set.find(ch) == c_set.end()) {
            res += ch;
        }
    }
    
    // Check if the result string is palindrome
    bool is_palindrome = true;
    int start = 0, end = res.length() - 1;
    while (start < end) {
        if (res[start] != res[end]) {
            is_palindrome = false;
            break;
        }
        start++;
        end--;
    }
    
    // Add the result string and palindrome check to the vector
    result.push_back(res);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}