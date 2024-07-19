#include <string>

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
    string temp = result;
    reverse(temp.begin(), temp.end());
    vector<string> ans;
    ans.push_back(result);
    ans.push_back(issame(result, temp) ? "True" : "False");
    return ans;
}

int main() {
    vector<string> result = reverse_delete("programming", "g");
    for (string str : result) {
        cout << str << " ";
    }
    return 0;
}