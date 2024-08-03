#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> result;
    int maxR = v.back();

    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] >= maxR) {
            result.push_back(v[i]);
            maxR = v[i];
        }
    }

    result.push_back(v.back());
    return result;
}