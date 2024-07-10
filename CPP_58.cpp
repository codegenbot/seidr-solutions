```cpp
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> common(set<int> l1, set<int> l2) {
    vector<int> result;
    auto range = set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(),
                                    std::back_inserter(result));
    
    return result;
}

int main() {
    vector<int> l1 = {4, 3, 2, 8};
    vector<int> l2 = {2, 4, 6, 8};
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    vector<int> commonElements = common(s1, s2);
    for(int i : commonElements) {
        cout << i << " ";
    }
    return 0;
}