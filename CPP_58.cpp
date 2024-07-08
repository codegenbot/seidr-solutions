#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> l1_set(l1.begin(), l1.end());
    set<int> l2_set(l2.begin(), l2.end());

    set<int> result_set;
    set_intersection(l1_set.begin(), l1_set.end(), l2_set.begin(), l2_set.end(),
                      inserter(result_set, result_set.begin()));

    vector<int> result(result_set.begin(), result_set.end());
    return result;
}

int main() {
    vector<int> l1 = {1, 4, 3, 34, 653, 2, 5};
    vector<int> l2 = {5, 7, 1, 5, 9, 653, 121};

    vector<int> result = common(l1, l2);

    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}