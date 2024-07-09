#include <vector>
#include <string>

using namespace std;

std::string match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    vector<string> input;
    cout << "Enter a string: ";
    string str;
    getline(cin, str);
    input.push_back(str);
    cout << match_parens(input) << endl;
    return 0;
}