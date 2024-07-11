#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    for (char x : s) {
        bool found = false;
        for (char y : c) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(string(1, x));
        }
    }
    string rev = "";
    for (int i = result.size() - 1; i >= 0; i--) {
        rev += result[i];
    }
    if (rev == string(result[0])) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}