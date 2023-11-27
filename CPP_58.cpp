#include <vector>
#include <algorithm>
#include <iterator>

bool issame(vector<int> a, vector<int> b);
vector<int> common(vector<int> l1, vector<int> l2);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> common(vector<int> l1, vector<int> l2){
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    assert(issame(common({4, 3, 2, 8}, {2, 8, 1, 3})), {2, 3, 8});
    assert(issame(common({1, 2, 3}, {4, 5, 6})), {});
    // Add more test cases if needed
  
    return 0;
}