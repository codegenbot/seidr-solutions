#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> result;
    int max_right = v.back();
    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= max_right) {
            max_right = v[i];
            result.push_back(v[i]);
        }
    }
    return result;
}