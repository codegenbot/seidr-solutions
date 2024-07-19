#include <algorithm>

vector<string> separate_paren_groups(string paren_string);

bool issame(const vector<string>& v1, const vector<string>& v2) {
    vector<string> temp1 = v1;
    vector<string> temp2 = v2;
    sort(temp1.begin(), temp1.end());
    sort(temp2.begin(), temp2.end());
    return temp1 == temp2;
}