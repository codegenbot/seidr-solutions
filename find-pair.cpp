#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& numbers, int target) {
    unordered_map<int, int> map;
    for (int num : numbers) {
        int complement = target - num;
        if (map.find(complement) != map.end()) {
            return {complement, num};
        }
        map[num] = 1;
    }
    return {-1, -1}; // Return an empty pair if no solution is found
}