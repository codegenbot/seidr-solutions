#include <vector>
bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size();
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    int i = n;
    while (i != 1) {
        if (i % 2 == 0) {
            i = i / 2;
        } else {
            i = 3 * i + 1;
        }
        if (i % 2 != 0) {
            result.push_back(i);
        }
    }
    sort(result.begin(), result.end());
    return result;
}