#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& numbers, int target) {
    unordered_map<int, int> numIndex;
    
    for(int i = 0; i < numbers.size(); i++) {
        int complement = target - numbers[i];
        if(numIndex.find(complement) != numIndex.end()) {
            return {complement, numbers[i]};
        }
        numIndex[numbers[i]] = i;
    }
    
    // If no pair is found
    return {-1, -1};
}