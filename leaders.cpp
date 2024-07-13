#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> res;
    for (int i = 0; i < vec.size(); i++) {
        bool leader = true;
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[j] >= vec[i]) {
                leader = false;
                break;
            }
        }
        if (leader) res.push_back(vec[i]);
    }
    return res;
}