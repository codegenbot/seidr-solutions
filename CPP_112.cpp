#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Remove characters in c from s
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }

    // Check if the result string is palindrome
    string str = temp;
    reverse(str.begin(), str.end());
    bool isPalindrome = (str == temp);

    // Add the result to the vector
    result.push_back(temp);
    result.push_back((isPalindrome ? "True" : "False"));

    return result;
}

int main() {
    string s, c;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> c;

    vector<string> res = reverse_delete(s, c);
    cout << "Result: " << res[0] << ", " << res[1] << endl;

    return 0;
}