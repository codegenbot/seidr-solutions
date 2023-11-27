#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

bool issame(int a, int b) {
    return a == b;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end(), issame), result.end());
    return result;
}