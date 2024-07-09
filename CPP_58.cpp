#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> commonElements;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(commonElements, commonElements.begin()));

    return vector<int>(commonElements.begin(), commonElements.end());
}

int main() {
    // Test cases
    vector<int> l1 = {1, 4, 3, 34, 653, 2, 5};
    vector<int> l2 = {5, 7, 1, 5, 9, 653, 121};
    cout << "Common elements: ";
    for (int x : common(l1, l2)) {
        cout << x << " ";
    }
    cout << endl;

    l1 = {5, 3, 2, 8};
    l2 = {3, 2};
    cout << "Common elements: ";
    for (int x : common(l1, l2)) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}