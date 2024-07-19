#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> order_by_points(const vector<int>& vec) {
    vector<int> result = vec;
    sort(result.begin(), result.end(), greater<int>());
    return result;
}