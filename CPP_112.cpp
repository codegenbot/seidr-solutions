#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Remove characters in s that are equal to any character in c
    string temp = "";
    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found)
            temp += ch;
    }
    
    // Check if the result string is palindrome
    string str = temp;
    reverse(str.begin(), str.end());
    bool is_palindrome = (str == temp);
    
    // Add the result string and "True"/"False" to the vector
    result.push_back(temp);
    result.push_back(is_palindrome ? "True" : "False");
    
    return result;
}