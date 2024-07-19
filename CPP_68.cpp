#include <vector>
#include <climits>
#include <cassert>

using namespace std;

std::vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
        }
    }

    if (minEven != INT_MAX) {
        result.push_back(minEven);
    }

    return result;
}