```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in string c for efficient lookup
    set<char> cSet(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string temp = "";
    
    // Iterate over each character in string s
    for (char ch : s) {
        if (find(cSet.begin(), cSet.end(), ch) == cSet.end()) {
            temp += ch;
        }
    }
    
    // Check if the resulting string is palindrome
    bool check = (temp.compare(reverse(temp)) == 0);
    
    // Store the result and the check in a vector of strings
    result.push_back(temp);
    result.push_back((check ? "True" : "False"));
    
    return result;
}

int main() {
    string s, c;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> c;
    vector<string> res = reverse_delete(s, c);
    cout << "Result string: " << res[0] << endl;
    cout << "Palindrome check: " << res[1] << endl;
    return 0;
}