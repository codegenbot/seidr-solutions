#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2);

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    vector<int> result = common(a, b);
    return result.empty();
}

int main() {
    cout << issame(common({4, 3, 2, 8}, {}), {}) << endl;
    return 0;
}