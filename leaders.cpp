#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> result;
    for (int i = v.size() - 1; i >= 0; i--) {
        bool leader = true;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] >= v[i]) {
                leader = false;
                break;
            }
        }
        if (leader) {
            result.push_back(v[i]);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}