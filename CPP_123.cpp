#include <vector>
#include <algorithm>
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
    assert(get_odd_collatz(1) == vector<int>{1});
    assert(get_odd_collatz(15) == vector<int>{15, 46, 23, 70, 35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1});
    
    return 0;
}