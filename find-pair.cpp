#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& arr, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (map.find(complement) != map.end()) {
            return {complement, arr[i]};
        }
        map[arr[i]] = i;
    }
    return {-1, -1}; // or throw an exception if you prefer
}