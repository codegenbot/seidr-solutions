#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result = {};
    if (arr.empty()) return result;

    pair<int, int> smallest_even_value(-1, -1);
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && ((smallest_even_value.first == -1) || (arr[i] < smallest_even_value.first))) {
            smallest_even_value = {arr[i], i};
        }
    }

    result.push_back(smallest_even_value);

    return result;