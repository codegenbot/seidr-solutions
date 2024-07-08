#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> result;
    int n = vec.size();
    for (int i = n - 1; i >= 0; --i) {
        if (i == n - 1 || vec[i] >= vec[i + 1]) {
            result.push_back(vec[i]);
        }
    }
    reverse(result.begin(), result.end());
    return result;