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
        // If the character is not in the set of characters in c, add it to the temporary string
        if (c_set.find(ch) == c_set.end()) {
            temp += ch;
        }
    }
    
    // Check if the temporary string is a palindrome
    bool is_palindrome = true;
    int left = 0, right = temp.length() - 1;
    
    while (left < right) {
        if (temp[left] != temp[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    // Add the result string and palindrome check to the vector
    result.push_back(temp);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}

int main() {
    string s, c;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> c;
    
    vector<string> res = reverse_delete(s, c);
    
    for (string str : res) {
        cout << str << endl;
    }
    
    return 0;
}