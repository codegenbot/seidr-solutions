#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return {};

    int minEvenValue = INT_MAX;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            result = {{minEvenValue, i}};
        } else if (arr[i] % 2 == 0 && arr[i] == minEvenValue) {
            result = {{minEvenValue, i}};
        }
    }

    return result;
}