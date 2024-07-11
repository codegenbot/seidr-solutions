#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& arr, int target) {
    unordered_map<int, int> map;
    for (int num : arr) {
        int complement = target - num;
        if (map.count(complement)) {
            return {complement, num};
        }
        map[num] = 1;
    }
    return {{},{}};
}