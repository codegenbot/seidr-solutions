#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> v1, vector<string> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        bool flag = false;
        for (int j = 0; j < c.length(); j++) {
            if (s[i] == c[j]) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            temp += s[i];
        }
    }
    string palindromCheck = temp;
    reverse(palindromCheck.begin(), palindromCheck.end());
    result.push_back(temp);
    if (temp == palindromCheck) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), vector<string> {"" , "True"}));
    return 0;
}