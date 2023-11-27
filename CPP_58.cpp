#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> common(vector<int> l1,vector<int> l2){
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b){
    vector<int> expected = common(a, b);
    sort(expected.begin(), expected.end());
    sort(b.begin(), b.end());
    return expected == b;
}

int main() {
    // Test cases
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    
    return 0;
}