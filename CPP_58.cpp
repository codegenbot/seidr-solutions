#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> findCommonElements(vector<int>& l1, vector<int>& l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

vector<int> common(const vector<int>& elements) {
    return elements;
}

int main() {
    assert(issame(findCommonElements({4, 3, 2, 8}, {}), common({})));
    // Add more test cases as needed
    return 0;
}