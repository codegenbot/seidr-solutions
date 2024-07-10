#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Remove characters from s that are equal to any character in c
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found)
            temp += ch;
    }
    
    // Check if the result string is palindrome
    string str1 = temp;
    reverse(str1.begin(), str1.end());
    bool check = str1 == temp;
    
    // Add the result string and "True"/"False" to the vector
    result.push_back(temp);
    result.push_back(check ? "True" : "False");
    
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
    cout << "Is palindrome? " << res[1] << endl;
    
    return 0;
}