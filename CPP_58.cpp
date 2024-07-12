#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <cassert>
#include <set>

using namespace std;

vector<int> findCommonElements(vector<int>& l1, vector<int>& l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    // Test cases
    vector<int> l1 = {1, 2, 3, 4, 5};
    vector<int> l2 = {3, 4, 5, 6, 7};
    vector<int> commonElements = findCommonElements(l1, l2);
    
    for (int num : commonElements) {
        cout << num << " ";
    }
    
    return 0;
}