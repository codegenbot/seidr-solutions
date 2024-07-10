#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> leaders;
    int n = v.size();
    for (int i = 0; i < n; i++) {
        if (i == n - 1 || v[i] >= v[i + 1]) {
            leaders.push_back(v[i]);
        }
    }
    return leaders;
}