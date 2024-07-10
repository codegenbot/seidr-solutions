#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

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
    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter a character to remove: ";
    cin >> c;
    vector<string> result = reverse_delete(s, c);
    for (string str : result) {
        cout << str << endl;
    }
    return 0;
}