#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    
    for(int i = 0; i < numbers.size(); i++) {
        int complement = target - numbers[i];
        if(numMap.find(complement) != numMap.end()) {
            return {complement, numbers[i]};
        }
        numMap[numbers[i]] = i;
    }
    
    pair<int, int> result;
    return result;
}