#include <vector>
#include <string>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != to_string(reverse(str)) ) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

vector<int> reverse(vector<string> s) {
    vector<int> result;
    for (char c : s[0]) {
        result.push_back(c - '0');
    }
    return result;
}