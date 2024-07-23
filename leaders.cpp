Here is the solution:

#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> result;
    for (int i = 0; i < v.size(); i++) {
        bool leader = true;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] >= v[i]) {
                leader = false;
                break;
            }
        }
        if (leader) result.push_back(v[i]);
    }
    return result;
}