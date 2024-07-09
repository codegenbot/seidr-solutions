#include <vector>
#include <string>

bool issame(const vector<int>& a, const vector<int>& b) {
    return (a == b);
}

vector<int> even_odd_count(int num) {
    int evens = 0, odds = 0;
    string str = to_string(abs(num));
    for (char c : str) {
        if (stoi(c) % 2 == 0)
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