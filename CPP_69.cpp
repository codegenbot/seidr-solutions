#include <map>
#include <vector>

std::vector<int> search(std::vector<int> lst) {
    std::map<int, int> countMap;
    for (auto i : lst) {
        countMap[i]++;
    }
    
    std::vector<int> dupVec;
    for (auto p : countMap) {
        if (p.second > 1) 
            for (int j = 0; j < p.second; j++) 
                dupVec.push_back(p.first); 
    }
    return dupVec;
}