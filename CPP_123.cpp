#include <vector>
#include <algorithm>

using namespace std;

bool is_same(vector<int>& v1, vector<int>& v2) {
    if (v1.size() != v2.size())
        return false;
    
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i])
            return false;
    }
    
    return true;
}

bool operator==(const vector<int>& v1, const vector<int>& v2) {
    return is_same(v1, v2);
}

int main() {
    assert(get_odd_collatz(1) == vector<int>({1}));
    return 0;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    sort(result.begin(), result.end());
    return result;
}