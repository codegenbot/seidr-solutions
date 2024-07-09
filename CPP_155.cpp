#include <vector>
#include <string>

bool issame(vector<int> a,vector<int>b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> even_odd_count(int num) {
    int evens = 0, odds = 0;
    string str = to_string(abs(num));
    for (char c : str) {
        if ((c - '0') % 2 == 0)
            evens++;
        else
            odds++;
    }
    return {evens, odds};
}

int main() {
    assert (issame(even_odd_count(0), vector<int>({1, 0})));
    return 0;
}