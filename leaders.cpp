#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> result;
    int maxRgt = v.back();
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] >= maxRgt) {
            maxRgt = v[i];
            result.push_back(v[i]);
        }
    }
    return result;
}