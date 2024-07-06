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

    string str = res;
    reverse(str.begin(), str.end());
    result.push_back((str == res ? "True" : "False"));

    return result;
}