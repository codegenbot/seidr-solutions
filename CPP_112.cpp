#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<char>> reverse_delete(string s, string c) {
    vector<vector<char>> result;
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
    vector<char> vec1(temp.begin(), temp.end());
    result.push_back(vec1);
    string rev = temp;
    reverse(rev.begin(), rev.end());
    if (temp == rev) {
        vector<char> vec2(1, 'T');
        for (char cc : "rue") {
            vec2.push_back(cc);
        }
        result.push_back(vec2);
    } else {
        vector<char> vec3(5, 'F');
        for (char cc : "alse") {
            vec3.push_back(cc);
        }
        result.push_back(vec3);
    }
    return result;
}

int main() {
    assert(issame(vector<string>(reverse_delete("mamma", "mia").begin(), reverse_delete("mamma", "mia").end()) , vector<string>({"", "True"})));
    return 0;
}