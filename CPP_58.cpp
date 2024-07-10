```cpp
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    vector<int> result;
    for(auto it = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end()), end = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end()); it != end; ++it) {
        result.push_back(*it);
    }
    
    return result;
}

int main() {
    vector<int> l1 = {4, 3, 2, 8};
    vector<int> l2 = {};
    cout << "Common elements: ";
    for(int i : common(l1, l2)) {
        cout << i << " ";
    }
    return 0;
}