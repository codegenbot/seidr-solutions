#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> common;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(common, common.begin()));

    vector<int> result(common.begin(), common.end());
    return result;
}

int main() {
    // Test the function
    vector<int> l1 = {1, 4, 3, 34, 653, 2, 5};
    vector<int> l2 = {5, 7, 1, 5, 9, 653, 121};

    vector<int> result = common(l1, l2);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}