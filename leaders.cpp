#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] >= arr[n - 1]) {
            leaders.push_back(arr[i]);
        }
    }
    return leaders;
}