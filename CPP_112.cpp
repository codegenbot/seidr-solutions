#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    string res = "";
    for (char x : s) {
        bool found = false;
        for (char y : c) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            res += x;
        }
    }

    vector<string> result;
    result.push_back(res);

    string rev_str = "";
    for (char x : s) {
        rev_str += x;
    }
    reverse(rev_str.begin(), rev_str.end());
    result.push_back(rev_str);

    return result;
}