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
    ans.push_back(result == temp ? "True" : "False");
    return ans;
}

int main() {
    vector<string> result = reverse_delete("hello", "eo");
    vector<string> expected = {"hll", "True"};
    cout << "Output: " << result[0] << ", " << result[1] << endl;
    cout << "Expected: " << expected[0] << ", " << expected[1] << endl;
    cout << "Match: " << (issame(result, expected) ? "Yes" : "No") << endl;
    return 0;
}