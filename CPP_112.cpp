#include <vector>
#include <algorithm>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
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
    string revTemp = temp;
    reverse(revTemp.begin(), revTemp.end());
    result.push_back((temp == revTemp) ? "True" : "False");
    return result;
}

int main() {
    vector<string> res = reverse_delete("hello", "o");
    for (string str : res) {
        cout << str << endl;
    }
    vector<string> vec1 = {"a", "b", "c"};
    vector<string> vec2 = {"a", "b", "c"};
    if (issame(vec1, vec2)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}