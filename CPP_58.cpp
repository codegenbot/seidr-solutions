#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cassert>
#include <set>

using namespace std;

vector<int> solve(vector<int>& l1, vector<int>& l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    // Test cases
    vector<int> l1 = {1, 3, 5, 7, 9};
    vector<int> l2 = {2, 3, 4, 7, 8};
    vector<int> result = solve(l1, l2);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}