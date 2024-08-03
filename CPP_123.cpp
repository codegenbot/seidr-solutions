#include <vector>
#include <cassert>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> collatz_sequence;
    while (n != 1) {
        collatz_sequence.push_back(n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    collatz_sequence.push_back(1);
    return collatz_sequence;
}

int main() {
    assert(get_odd_collatz(1) == vector<int>({1}));
    assert(get_odd_collatz(7) == vector<int>({7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1}));

    return 0;
}