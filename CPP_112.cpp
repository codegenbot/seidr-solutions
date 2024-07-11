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
    for (char c : s) {
        // If the character is not in the set of characters in string c, add it to the temporary string
        if (c_set.find(c) == c_set.end()) {
            temp += c;
        }
    }
    
    // Check if the temporary string is palindrome
    bool is_palindrome = true;
    int start = 0, end = temp.length() - 1;
    while (start < end) {
        if (temp[start] != temp[end]) {
            is_palindrome = false;
            break;
        }
        start++;
        end--;
    }
    
    // Add the result string and palindrome check to the vector
    result.push_back(temp);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}

int main() {
    // Test cases
    string s1 = "abcde", c1 = "ae";
    string s2 = "abcdef", c2 = "b";
    string s3 = "abcdedcba", c3 = "ab";
    
    vector<string> result1 = reverse_delete(s1, c1);
    vector<string> result2 = reverse_delete(s2, c2);
    vector<string> result3 = reverse_delete(s3, c3);
    
    cout << "For s = \"" << s1 << "\", c = \"" << c1 << "\", the result is (" << result1[0] << "," << result1[1] << ")" << endl;
    cout << "For s = \"" << s2 << "\", c = \"" << c2 << "\", the result is (" << result2[0] << "," << result2[1] << ")" << endl;
    cout << "For s = \"" << s3 << "\", c = \"" << c3 << "\", the result is (" << result3[0] << "," << result3[1] << ")" << endl;
    
    return 0;
}