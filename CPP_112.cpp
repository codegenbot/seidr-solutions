#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in string c for efficient lookup
    set<char> setC(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string res = "";
    
    // Iterate over each character in string s
    for (char c : s) {
        // If the character is not in the set of characters in string c, add it to the result
        if (setC.count(c) == 0) {
            res += c;
        }
    }
    
    // Check if the result string is palindrome
    bool isPalindrome = true;
    int left = 0, right = res.length() - 1;
    while (left < right) {
        if (res[left] != res[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    // Create a vector containing the result string and "True"/"False" for the check
    vector<string> finalResult;
    finalResult.push_back(res);
    if (isPalindrome) {
        finalResult.push_back("True");
    } else {
        finalResult.push_back("False");
    }
    
    return finalResult;
}

int main() {
    string s = "abcdedcba";
    string c = "ab";
    vector<string> result = reverse_delete(s, c);
    cout << "Result: " << result[0] << ", Is Palindrome: " << result[1] << endl;
    
    return 0;
}