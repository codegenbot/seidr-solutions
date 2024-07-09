#include <vector>
#include <string>

bool issame(const vector<int>& a, const vector<int>& b) {
    return (a == b);
}

vector<int> even_odd_count(int num) {
    int evens = 0, odds = 0;
    string str = to_string(abs(num));
    for (char c : str) {
        if (stoi(string(1,c)) % 2 == 0)
            evens++;
        else
            odds++;
    }
    return vector<int>(2) = {evens, odds};
}