#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in string c for efficient lookup
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in string s
    for (char ch : s) {
        // If the character is not in set c, add it to the temporary string
        if (c_set.find(ch) == c_set.end()) {
            temp += ch;
        }
    }
    
    // Check if the temporary string is a palindrome
    bool is_palindrome = true;
    for (int i = 0; i < temp.length() / 2; i++) {
        if (temp[i] != temp[temp.length() - i - 1]) {
            is_palindrome = false;
            break;
        }
    }
    
    // Add the result string and palindrome status to the vector
    result.push_back(temp);
    result.push_back(is_palindrome ? "True" : "False");
    
    return result;
}

int main() {
    string s, c;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter another string: ";
    cin >> c;
    vector<string> result = reverse_delete(s, c);
    cout << "Result: " << result[0] << ", Palindrome: " << result[1] << endl;
    return 0;
}