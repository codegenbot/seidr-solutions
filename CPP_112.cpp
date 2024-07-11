#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    set<char> c_set; // declare before initializing
    
    // Create a set of characters in string c for efficient lookups
    c_set.insert(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string res = "";
    
    // Iterate over each character in string s
    for (char ch : s) {
        // If the character is not in the set of characters from string c, add it to the result
        if (c_set.find(ch) == c_set.end()) {
            res += ch;
        }
    }
    
    // Check if the result string is palindrome
    bool check = true;
    int left = 0, right = res.length() - 1;
    while (left < right) {
        if (res[left] != res[right]) {
            check = false;
            break;
        }
        left++;
        right--;
    }
    
    // Add the result string and the check to the vector
    result.push_back(res);
    result.push_back(check ? "True" : "False");
    
    return result;
}