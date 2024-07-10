```cpp
#include <vector>

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        stones = (stones % 2 == 1) ? stones + 1 : stones + 2;
    }
    return pile;
}