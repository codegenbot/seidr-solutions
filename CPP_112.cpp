#include <algorithm>
#include <string>
#include <vector>
#include <ostream>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
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
    result.push_back(temp);
    string rev = temp;
    reverse(rev.begin(), rev.end());
    result.push_back((temp == rev) ? "True" : "False");
    return result;
}

int main() {
    string s, c;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the character to be deleted: ";
    cin >> c;
    vector<string> result = reverse_delete(s, c);
    if (result.size() == 2) {
        cout << "The original string is not the same as the reversed and deleted string." << endl;
    } else {
        cout << "The original string is the same as the reversed and deleted string." << endl;
    }
    return 0;
}