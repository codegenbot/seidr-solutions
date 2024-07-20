```cpp
#include <vector>
using namespace std;

bool issame(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if ((n % i) == 0)
            sum += i;
    }
    return sum == n;
}

vector<int> make_a_perfect_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if (issame(stones)) {
            stones = stones - 1;
        } else {
            stones = stones + 2;
        }
    }
    return pile;
}