#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || arr[i] >= arr[i + 1]) {
            leaders.push_back(arr[i]);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}