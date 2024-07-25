#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(),
            inserter(result, result.begin()));
    sort(result.begin(), result.end());
    return result;
}