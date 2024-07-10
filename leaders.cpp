#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> result;
    int rightmost = vec.back();
    for (int i = vec.size() - 2; i >= 0; --i) {
        if (vec[i] >= rightmost) {
            result.push_back(vec[i]);
            rightmost = vec[i];
        }
    }
    return result;
}