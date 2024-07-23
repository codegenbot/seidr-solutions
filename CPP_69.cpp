#include <vector>
#include <map>

int search(const std::vector<int>& lst) {
    std::map<int, int> countMap;
    for (auto i : lst) {
        if(countMap.find(i) != countMap.end())
            countMap[i]++;
        else
            countMap[i] = 1; 
    }
    
    int minVal = -1;
    for (auto p : countMap) {
        if (p.second > 1 && (minVal == -1 || p.first < minVal))
            minVal = p.first; 
    }
    return minVal;
}