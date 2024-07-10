#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool aresame(vector<string> a, vector<string> b) {
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
    vector<int> sum;
    for (int i = 0; i < input.size(); i++) {
        int total = 0;
        string temp = "";
        for (char c : input[i]) {
            if (isalpha(c)) {
                temp += tolower(c);
            } else {
                total += c - '0';
            }
        }
        sum.push_back(total);
    }
    return input;
}

bool aresame(vector<string> a, vector<string> b, vector<string> c) {
    if (a.size() != b.size() || a.size() != c.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!aresame({a[i]}, {b[i]}, {c[i]})) {
            return false;
        }
    }
    return true;
}