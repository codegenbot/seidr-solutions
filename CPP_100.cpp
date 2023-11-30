#include <vector>

vector<int> make_a_pile(int n) {
    vector<int> result;
    int stones = n;
    result.push_back(stones);

    for (int i = 1; i < n; i++) {
        if (n % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
        result.push_back(stones);
    }

    return result;
}