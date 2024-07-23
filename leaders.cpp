#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    if (n == 0) return result;

    int rightmost_leader = arr[n - 1];
    result.push_back(rightmost_leader);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= rightmost_leader) {
            rightmost_leader = arr[i];
            result.push_back(rightmost_leader);
        }
    }

    reverse(result.begin(), result.end());
    return result;
}