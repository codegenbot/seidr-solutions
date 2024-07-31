#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
        stones.push_back(n);
    }
    return stones;
}

bool is_same(vector<int> a, vector<int> b) {
    return a == b;
}