#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
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

vector<string> sorted_list_sum(vector<string> input) {
    sort(input.begin(), input.end());
    vector<string> result;
    for (int i = 0; i < input.size(); i++) {
        if (input[i].size() > 1) {
            char firstChar = input[i][0];
            bool found = false;
            for (int j = i + 1; j < input.size(); j++) {
                if (input[j][0] == firstChar) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.push_back(input[i]);
            }
        } else {
            result.push_back(input[i]);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b, vector<string> c) {
    if (a.size() != b.size() || a.size() != c.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!issame(vector<string>(1,a[i]), vector<string>(1,b[i]), vector<string>(1,c[i]))) {
            return false;
        }
    }
    return true;
}