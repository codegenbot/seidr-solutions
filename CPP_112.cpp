#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in c for efficient lookup
    set<char> cSet(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in s
    for (char ch : s) {
        // Check if the character is not in cSet
        if (cSet.find(ch) == cSet.end()) {
            // Add the character to temp
            temp += ch;
        }
    }
    
    // Check if the temp string is palindrome
    bool isPalindrome = true;
    int left = 0, right = temp.length() - 1;
    while (left < right) {
        if (temp[left] != temp[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    // Add the result string and palindrome status to the vector
    result.push_back(temp);
    result.push_back((isPalindrome ? "True" : "False"));
    
    return result;
}

int main() {
    string s, c;
    cout << "Enter the string s: ";
    cin >> s;
    cout << "Enter the string c: ";
    cin >> c;
    vector<string> result = reverse_delete(s, c);
    for (string str : result) {
        cout << str << endl;
    }
    return 0;
}