#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return {"False"};
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return {"False"};
    }
    return {"True"};
}

std::vector<std::string> reverse_delete(string s, string c) {
    std::vector<std::string> result;
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
    std::reverse(revTemp.begin(), revTemp.end());
    result.push_back((temp == revTemp) ? "True" : "False");
    return result;
}

int main() {
    string s, c;
    cin >> s >> c;
    vector<string> res = reverse_delete(s, c);
    cout << res[0] << endl;
    cout << res[1] << endl;
    if (res.size() > 2) {
        vector<string> temp = issame({res[0]}, {res[1]});
        for (string t : temp) {
            cout << t << endl;
        }
    }
    return 0;
}