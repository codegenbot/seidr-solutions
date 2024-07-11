#include <algorithm>
#include <vector>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    vector<pair<int, int>> pairs;
    for (int i : arr) {
        int ones = __builtin_popcount(i);
        pairs.push_back({ones, i});
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (pair<int, int> p : pairs) {
        result.push_back(p.second);  // Appending the second element of each pair
    }
    return result;
}