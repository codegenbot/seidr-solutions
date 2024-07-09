#include <vector>
using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> res;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)
            res.push_back(i);
    }
    return res;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> test = get_odd_collatz(6); 
    assert(issame(test , vector<int>({1, 3, 5, 7})));
}