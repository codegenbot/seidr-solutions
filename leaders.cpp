#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> result;
    int max = v.back();
    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] >= max) {
            max = v[i];
            result.push_back(max);
        }
    }
    return result;
}