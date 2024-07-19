#include <string>
#include <vector>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> reverse_delete(const string& s, const string& c) {
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
    string s = "example string";
    string c = "aeiou";
    vector<string> result = reverse_delete(s, c);
    return 0;
}