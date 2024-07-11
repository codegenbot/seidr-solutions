#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

pair<int, int> even_odd_count(int num) {
    pair<int, int> result = {0, 0};
    string str_num = (num < 0 ? "-" : "") + to_string(abs(num));
    for (char c : str_num) {
        if ((c - '0') % 2 == 0)
            ++result.first;
        else
            ++result.second;
    }
    return result;
}

int main() {
    assert(issame(even_odd_count(0), make_pair(1, 0)));
    return 0;
}