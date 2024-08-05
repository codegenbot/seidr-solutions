#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < vec.size(); i++) {
        int num = vec[i];
        if (map.count(target - num)) {
            return {target - num, num};
        }
        map[num] = i;
    }
    return {-1, -1}; // or throw an exception
}