#include <vector>

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            while (stones % 2 == 0) {
                stones++;
            }
        } else {
            while (stones % 2 != 0) {
                stones++;
            }
        }
        pile.push_back(stones);
        stones = 1;
    }
    return pile;
}