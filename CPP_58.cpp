#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    vector<int> result(s1.begin(), s1.end());
    set_intersection(s2.begin(), s2.end(), s1.begin(), s1.end(), back_inserter(result));

    sort(result.begin(), result.end());
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