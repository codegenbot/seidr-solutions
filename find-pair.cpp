#include <vector>
using namespace std;

vector<int> findPair(vector<vector<int>>& inputs) {
    vector<int> result;
    for (auto& pair : inputs) {
        int target = pair[2];
        auto it = pair.begin();
        it++;
        for (auto& num : *it) {
            if (find(it, it + pair.size() - 1, target - num) != it + pair.size()) {
                result.push_back(*it);
                result.push_back(target - *it);
                break;
            }
        }
    }
    return result;
}