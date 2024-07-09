#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    
    for (char i : s) {
        bool found = false;
        for (char j : c) {
            if (i == j) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += i;
        }
    }
    
    string check = temp;
    reverse(check.begin(), check.end());
    
    result.push_back(temp);
    result.push_back((check == temp) ? "True" : "False");
    
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