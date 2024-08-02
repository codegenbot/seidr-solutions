```
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> set_l1(l1.begin(), l1.end());
    set<int> set_l2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(set_l1.begin(), set_l1.end(), set_l2.begin(), set_l2.end(),
        inserter(intersection, intersection.begin()));

    vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> list1 = {1, 4, 3, 34, 653, 2, 5};
    vector<int> list2 = {5, 7, 1, 5, 9, 653, 121};

    vector<int> result = common(list1, list2);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}