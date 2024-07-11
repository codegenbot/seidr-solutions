#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<vector<int>> groups(3);
    for (int i = 0; i < l.size(); i++) {
        groups[i % 3].push_back(l[i]);
    }
    
    for (auto& group : groups) {
        sort(group.begin(), group.end());
    }

    vector<int> result;
    for (const auto& group : groups) {
        result.insert(result.end(), group.begin(), group.end());
    }
    return result;
}