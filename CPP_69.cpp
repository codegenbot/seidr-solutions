#include <vector>
#include <map>

int main() {
    int result = search({3, 10, 10, 9, 2});
}

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