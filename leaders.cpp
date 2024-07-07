#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    leaders.push_back(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= leaders.back()) {
            leaders.push_back(arr[i]);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}