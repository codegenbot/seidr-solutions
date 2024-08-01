#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    
    for (char x : s) {
        bool flag = false;
        for (char y : c) {
            if (x == y) {
                flag = true;
                break;
            }
        }
        if (!flag)
            temp += x;
    }

    result.push_back(temp);
    
    string rev = temp;
    reverse(rev.begin(), rev.end());
    
    result.push_back((temp == rev) ? "True" : "False");
    
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