#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        if (n % 2 == 0) {
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

vector<int> expected{8, 10, 12, 14, 16, 18, 20, 22};
vector<int> result = make_a_pile(8);
assert(std::equal(expected.begin(), expected.end(), result.begin()) == true;