#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in c for efficient lookup
    unordered_set<char> cSet(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string res = "";
    
    // Iterate over each character in s
    for (char ch : s) {
        // Check if the character is not in cSet
        if (cSet.find(ch) == cSet.end()) {
            // Add the character to the result string
            res += ch;
        }
    }
    
    // Check if the reversed result string is equal to the original result string
    bool isPalindrome = res == string(res.rbegin(), res.rend());
    
    // Add the result string and palindrome status to the vector
    result.push_back(res);
    result.push_back(isPalindrome ? "True" : "False");
    
    return result;
}

int main() {
    string s, c;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter another string: ";
    cin >> c;
    vector<string> res = reverse_delete(s, c);
    for (string str : res) {
        cout << str << endl;
    }
    return 0;
}