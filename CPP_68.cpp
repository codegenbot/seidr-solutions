#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool same(vector<int> a, vector<int> b) {
    return a.size() == b.size();
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minEven == INT_MAX) return {};

    result.push_back(minEven);
    return result;