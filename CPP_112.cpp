#include <string>
#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

vector<string> reverse_delete(string s, string c);

int main() {
    string s, c;
    cin >> s >> c;
    vector<string> result = reverse_delete(s, c);
    cout << result[0] << endl;
    cout << result[1] << endl;
    return 0;
}

vector<string> reverse_delete(string s, string c) {
    string result;
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    return {result, (isPalindrome ? "True" : "False")};
}