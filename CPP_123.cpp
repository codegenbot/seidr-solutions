#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> get_odd_collatz(int num) {
    vector<int> collatz_sequence;
    collatz_sequence.push_back(num);

    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = 3 * num + 1;
        }
        if (num % 2 != 0) {
            collatz_sequence.push_back(num);
        }
    }

    return collatz_sequence;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}