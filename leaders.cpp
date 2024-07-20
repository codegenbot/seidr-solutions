```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxRight = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}