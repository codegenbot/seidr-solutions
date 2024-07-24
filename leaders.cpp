#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> result;
    int maxRight = v.back();
    for(int i = v.size() - 2; i >= 0; i--) {
        if(v[i] >= maxRight) {
            maxRight = v[i];
            result.push_back(maxRight);
        }
    }
    return result;
}