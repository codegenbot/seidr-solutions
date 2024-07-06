#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = s;
    
    // Delete all characters in s that are equal to any character in c
    for (char ch : c) {
        temp.erase(remove(temp.begin(), temp.end(), ch), temp.end());
    }
    
    // Check if the result string is palindrome
    bool is_palindrome = true;
    string temp2 = temp;
    reverse(temp2.begin(), temp2.end());
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] != temp2[i]) {
            is_palindrome = false;
            break;
        }
    }
    
    // Return the result string and "True"/"False"
    result.push_back(temp);
    result.push_back(to_string(is_palindrome));
    return result;
}

int main() {
    string s, c;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string c: ";
    cin >> c;
    
    vector<string> result = reverse_delete(s, c);
    cout << "Result: " << result[0] << ", Palindrome: " << result[1] << endl;
    
    return 0;
}