#include <string>

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string temp = result;
    reverse(temp.begin(), temp.end());
    vector<string> ans;
    ans.push_back(result);
    ans.push_back(result == temp ? "True" : "False");
    return ans;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> a = {"abc", "def"};
    vector<string> b = {"abc", "def"};
    reverse_delete(a, b);
    return 0;
}