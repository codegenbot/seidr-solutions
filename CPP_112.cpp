#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set from string c for efficient lookup
    set<char> cSet(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in string s
    for (char ch : s) {
        // If character is not in set c, add it to temporary string
        if (!cSet.count(ch)) {
            temp += ch;
        }
    }
    
    // Check if the resulting string is palindrome
    bool isPalindrome = false;
    int left = 0, right = temp.length() - 1;
    while (left < right) {
        if (temp[left] != temp[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    // Add the result string and palindrome check to the vector
    result.push_back(temp);
    result.push_back((isPalindrome ? "True" : "False"));
    
    return result;
}