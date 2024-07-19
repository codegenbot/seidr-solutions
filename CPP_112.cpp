#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string>b) {
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
    string revResult = result;
    reverse(revResult.begin(), revResult.end());
    return {result, (result == revResult ? "True" : "False")};
}

int main() {
    assert (issame(reverse_delete("mamma", "mia") , {"" , "True"}));
}