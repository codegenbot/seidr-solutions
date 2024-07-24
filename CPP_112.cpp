#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += ch;
        }
    }
    string temp = result;
    reverse(temp.begin(), temp.end());
    return {result, issame(vector<string>{s}, vector<string>({"", temp == s ? "True" : "False"})) ? "True" : "False"};
}