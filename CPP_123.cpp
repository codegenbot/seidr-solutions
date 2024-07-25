#include <vector>
#include <algorithm>
#include <cassert>

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 1) {
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Test the get_odd_collatz function
    assert(issame(get_odd_collatz(10), {1, 3, 5, 9}));
    assert(issame(get_odd_collatz(20), {1, 3, 5, 9, 17}));
    
    return 0;
}