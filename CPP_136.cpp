#include <iostream>
#include <vector>
#include <utility>

using namespace std;

pair<int, int> largest_smallest_integers(vector<int> lst) {
    int largest_neg = 0, smallest_pos = 0;
    for (int num : lst) {
        if (num < 0 && num < largest_neg) {
            largest_neg = num;
        }
        if (num > 0 && (num < smallest_pos || smallest_pos == 0)) {
            smallest_pos = num;
        }
    }
    return {largest_neg, smallest_pos};
}

bool assertEquals(pair<int,int> a, pair<int,int> b) {
    return a.first == b.first && a.second == b.second;
}

int main() {
    assert (assertEquals(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), make_pair(-3, 1)));
    
    return 0;
}