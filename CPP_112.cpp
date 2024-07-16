#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Delete all characters in s that are equal to any character in c
    string newS = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            newS += ch;
        }
    }
    
    // Check if the result string is palindrome
    string palin = newS;
    reverse_copy(newS.begin(), newS.end(), back_inserter(palin));
    bool isPalindrome = (newS == palin);
    
    // Store the result in a vector
    result.push_back(newS);
    result.push_back(isPalindrome ? "True" : "False");
    
    return result;
}

int main() {
    string s, c;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string c: ";
    cin >> c;
    vector<string> res = reverse_delete(s, c);
    for (string str : res) {
        cout << str << endl;
    }
    return 0;
}