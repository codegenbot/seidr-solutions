#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    
    return true;
}

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char x : s) {
        bool found = false;
        for (char y : c) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += x;
        }
    }
    string temp = result;
    reverse(temp.begin(), temp.end());
    vector<string> output = {result, (temp == result ? "True" : "False")};
    return output;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}