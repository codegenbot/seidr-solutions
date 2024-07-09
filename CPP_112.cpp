#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set from string c for efficient lookup
    set<char> cSet(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over the input string s
    for (char& ch : s) {
        // If the character is not in the set, add it to the temporary string
        if (cSet.find(ch) == cSet.end()) {
            temp += ch;
        }
    }
    
    // Check if the reversed string is equal to the original string
    bool isPalindrome = temp == string(temp.rbegin(), temp.rend());
    
    result.push_back(temp);
    result.push_back(to_string(isPalindrome));
    
    return result;
}

int main() {
    string s, c;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter another string: ";
    cin >> c;
    vector<string> result = reverse_delete(s, c);
    cout << "Result: " << result[0] << ", " << (result[1] == "True" ? "True" : "False") << endl;
    
    return 0;
}