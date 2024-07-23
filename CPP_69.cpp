#include <map>
#include <vector>

int search(std::vector<int> lst) {
    std::map<int, int> countMap;
    for (auto i : lst) {
        countMap[i]++;
    }
    
    auto it = countMap.begin();
    while(it != countMap.end()) {
        if (it->second > 1) 
            return it->first; 
        ++it;
    }
    return -1;
}