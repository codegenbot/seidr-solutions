#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<vector<int>> get_odd_collatz(int n);

int main() {
    assert(issame(get_odd_collatz(1) , {1}));
    // other code...
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<vector<int>> get_odd_collatz(int n) {
    vector<int> sequence = {n};
    while (true) {
        if (sequence.back() % 2 == 0) {
            int next = sequence.back() / 2;
            if (next == 1) break;
            sequence.push_back(next);
        } else {
            int next = sequence.back() * 3 + 1;
            sequence.push_back(next);
        }
    }
    return {sequence};
}