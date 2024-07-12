#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cassert>
#include <set>

using namespace std;

vector<int> findCommonElements(const vector<int>& l1, const vector<int>& l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    // Test cases
    vector<int> list1 = {3, 1, 5, 2, 7};
    vector<int> list2 = {2, 5, 9, 1};
    vector<int> commonElements = findCommonElements(list1, list2);

    cout << "Common elements: ";
    for (int elem : commonElements) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}