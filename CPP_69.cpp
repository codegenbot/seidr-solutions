```cpp
#include <vector>
#include <map>

int search(vector<int> lst) {
    map<int, int> countMap;
    for (auto i : lst) {
        countMap[i]++;
    }
    
    for (auto p : countMap) {
        if (p.second > 1) return p.first; // Found a duplicate
    }
    return -1;
}

int main() {
    vector<int> lst = {1, 2, 3, 4, 5, 5};
    cout << search(lst);
}