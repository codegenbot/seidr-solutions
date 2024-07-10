#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
    vector<pair<int, int>> vec;
    for (int i : arr) {
        vec.emplace_back(i, __builtin_popcount(i));
    }
    sort(vec.begin(), vec.end());
    return vector<int>(vec.begin(), vec.end());
}