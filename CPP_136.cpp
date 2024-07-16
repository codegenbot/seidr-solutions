#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert (issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0, smallest_positive = 0;
    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }
    return {largest_negative, smallest_positive};
}