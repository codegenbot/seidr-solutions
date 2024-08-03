```cpp
#include <vector>
#include <algorithm>

bool same(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(same(reverse_delete("mamma", "mia") , {"", "True"}));
    return 0;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    result.push_back(temp);
    string rev = temp;
    reverse(rev.begin(), rev.end());
    result.push_back((temp == rev) ? "True" : "False");
    return result;
}