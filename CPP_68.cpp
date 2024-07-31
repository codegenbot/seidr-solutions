#include <vector>
#include <utility>
using namespace std;

vector<int> pluck(vector<int> arr) {
    pair<int, int> smallest_even = {INT_MAX, INT_MAX};

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even.first) {
            smallest_even = {arr[i], i};
        }
    }

    if (smallest_even.second == INT_MAX) {
        return {};
    }

    return {smallest_even.first, smallest_even.second};
}