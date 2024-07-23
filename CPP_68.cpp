#include <algorithm>
using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return {};

    int smallest_even = *min_element(arr.begin(), arr.end(),
                                     [](int a, int b) { return ((a % 2 != 0) && (b % 2 == 0)); });

    result.push_back(smallest_even);
    return result;
}