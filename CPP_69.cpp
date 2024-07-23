#include <vector>
#include <map>

int search(vector<int> lst) {
    map<int, int> countMap;
    for (auto i : lst) {
        countMap[i]++;
    }
    
    for (auto p : countMap) {
        if (p.second > 1) return p.first; 
    }
    return -1;
}