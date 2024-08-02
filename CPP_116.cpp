#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
    vector<pair<int, int>> vec;
    for (int i : arr) {
        vec.push_back({__builtin_popcount(i), i});
    }
    sort(vec.begin(), vec.end());
    return vector<int>(transform(vec.begin(), vec.end(), [](auto p){ return p.second; }), transform(vec.begin(), vec.end(), [](auto p){ return p.second; }));
}