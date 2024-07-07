```cpp
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> set1(l1.begin(), l1.end());
    set<int> set2(l2.begin(), l2.end());
    vector<int> intersection;
    intersection.insert(intersection.end(), set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
        back_inserter(intersection)));
    return intersection;
}

int main() {
    vector<int> l1 = {1,2,3,4};
    vector<int> l2 = {3,4,5,6};
    vector<int> result = common(l1, l2);
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}