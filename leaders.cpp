#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> leaders;
    int n = v.size();
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || v[i] >= v[i + 1]) {
            leaders.push_back(v[i]);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}