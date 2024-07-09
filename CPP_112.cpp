#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Delete all characters in s that are equal to any character in c
    string temp = "";
    for (char c1 : s) {
        bool found = false;
        for (char c2 : c) {
            if (c1 == c2) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += c1;
        }
    }
    
    // Check if the result string is palindrome
    bool is_palindrome = true;
    for (int i = 0; i < temp.length() / 2; i++) {
        if (temp[i] != temp[temp.length() - i - 1]) {
            is_palindrome = false;
            break;
        }
    }
    
    result.push_back(temp);
    result.push_back((is_palindrome) ? "True" : "False");
    
    return result;
}