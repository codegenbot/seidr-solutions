#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    map<int, int> numMap;
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, vec[i]};
        }
        numMap[vec[i]] = i;
    }
    return {-1, -1}; // or throw an exception
}