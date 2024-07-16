#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> leaders;
    int maxR = vec.back();
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] >= maxR) {
            leaders.push_back(vec[i]);
            maxR = vec[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}