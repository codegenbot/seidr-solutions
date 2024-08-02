#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Remove all characters in s that are equal to any character in c
    string temp = "";
    for (char& ch : s) {
        bool isDeleted = false;
        for (char& cc : c) {
            if (ch == cc) {
                isDeleted = true;
                break;
            }
        }
        if (!isDeleted)
            temp += ch;
    }

    // Check if the result string is palindrome
    string temp2 = temp;
    reverse(temp2.begin(), temp2.end());
    bool isPalindrome = temp == temp2;

    // Return a vector containing the result string and "True"/"False" for the check
    result.push_back(temp);
    result.push_back(isPalindrome ? "True" : "False");
    
    return result;
}