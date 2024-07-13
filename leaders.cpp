#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int maxright = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxright) {
            leaders.push_back(arr[i]);
            maxright = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}