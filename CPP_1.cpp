#include <vector>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string temp;
    int count = 0;
    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            count++;
            if (count == 1) {
                temp += paren_string[i];
            }
        }
        else if (paren_string[i] == ')') {
            count--;
            if (count == 0) {
                temp += paren_string[i];
                result.push_back(temp);
                temp = "";
            }
        }
    }
    return result;
}