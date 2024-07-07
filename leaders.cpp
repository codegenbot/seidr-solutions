```
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int rightmost = arr[n - 1];
    result.push_back(rightmost);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}