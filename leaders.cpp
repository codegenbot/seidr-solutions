#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> result;
    int last = vec.back();
    for (int i = vec.size() - 2; i >= 0; --i) {
        if (vec[i] >= last) {
            result.push_back(vec[i]);
            last = vec[i];
        }
    }
    return result;
}