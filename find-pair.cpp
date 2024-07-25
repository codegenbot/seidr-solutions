#include <vector>
using namespace std;

vector<int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, vec[i]};
        }
        numMap[vec[i]] = i;
    }
    
    vector<int> result = {};
    return result; // or throw an exception if no pair is found
}