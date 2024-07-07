#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in c for efficient look up
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in s
    for (char ch : s) {
        // If the character is not in c, add it to temp
        if (c_set.find(ch) == c_set.end()) {
            temp += ch;
        }
    }
    
    // Check if the result string is palindrome
    bool check = (temp == reverse(temp));
    
    // Add the result string and check to the vector
    result.push_back(temp);
    result.push_back(to_string(check));
    
    return result;
}