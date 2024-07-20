#include <iostream>
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

int main() {
    vector<int> v1 = {1, 4, 3, 34, 653, 2, 5};
    vector<int> v2 = {5, 7, 1, 5, 9, 653, 121};
    vector<int> res = common(v1, v2);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}