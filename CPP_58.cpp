#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    vector<int> sortedA = a;
    vector<int> sortedB = b;
    sort(sortedA.begin(), sortedA.end());
    sort(sortedB.begin(), sortedB.end());
    return sortedA == sortedB;
}

int main() {
    assert(issame(vector<int>{4, 3, 2, 8}, vector<int>{}) == false);
    assert(issame(vector<int>{1, 2, 3}, vector<int>{3, 2, 1}) == true);
    assert(issame(vector<int>{5, 6, 7}, vector<int>{8, 9}) == false);

    return 0;
}