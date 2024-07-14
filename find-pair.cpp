#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& arr, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, arr[i]};
        }
        numMap[arr[i]] = i;
    }
    return {-1, -1}; // or throw an exception if you prefer
}