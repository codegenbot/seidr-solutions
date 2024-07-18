#include <algorithm>
#include <string>
#include <vector>

using namespace std;

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

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    string inputStr, deleteStr;
    cin >> inputStr >> deleteStr;

    vector<string> result = reverse_delete(inputStr, deleteStr);

    for (const auto& str : result) {
        cout << str << " ";
    }

    return 0;
}