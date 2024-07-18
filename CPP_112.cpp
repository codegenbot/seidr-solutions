#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<string> reverse_delete(string s, string c);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    return {result, (result == reversed) ? "True" : "False"};
}

int main() {
    string s, c;
    cin >> s >> c;
    vector<string> result = reverse_delete(s, c);
    for (string str : result) {
        cout << str << " ";
    }
    return 0;
}