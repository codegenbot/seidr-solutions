#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> findCommonElements(vector<int>& l1, vector<int>& l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(vector<int>& a, vector<int>& b){
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

int main() {
    auto common = [](vector<int> v1, vector<int> v2) {
        return findCommonElements(v1, v2);
    };

    assert(issame(common({4, 3, 2, 8}, {}), {}));
}