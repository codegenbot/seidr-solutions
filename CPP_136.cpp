#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;

    for(int i = 0; i < lst.size(); i++) {
        if(lst[i] < 0 && lst[i] > largest_negative) {
            largest_negative = lst[i];
        }
        if(lst[i] > 0 && lst[i] < smallest_positive) {
            smallest_positive = lst[i];
        }
    }

    return {largest_negative, smallest_positive};
}

int main() {
    vector<int> result = largest_smallest_integers({-6, -4, -4, -3, -100, 1});
    assert(result[0] == -100 && result[1] == -3);

    result = largest_smallest_integers({5, 3, -1, 7, 2});
    assert(result[0] == -1 && result[1] == 2);

    result = largest_smallest_integers({0, 0, 0, 0, 0});
    assert(result[0] == 0 && result[1] == 0);

    result = largest_smallest_integers({-1, -2, -3, -4, -5});
    assert(result[0] == -1 && result[1] == -5);

    result = largest_smallest_integers({1, 2, 3, 4, 5});
    assert(result[0] == 1 && result[1] == 5);

    return 0;
}