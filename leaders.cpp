```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> result;
    int maxRight = vec.back();
    for (int i = vec.size() - 2; i >= 0; --i) {
        if (vec[i] >= maxRight) {
            result.push_back(vec[i]);
            maxRight = vec[i];
        }
    }
    return result;
}