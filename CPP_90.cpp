```cpp
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; 
    vector<int>::iterator it = min_element(lst.begin(), lst.end());
    vector<int>::iterator it2 = find(it, lst.end(), *it);
    if (it2 == lst.end()) return *it; 
    return *(it2 + 1); 
}