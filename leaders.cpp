```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    int rightmost_max = arr.back();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= rightmost_max) {
            leaders.push_back(arr[i]);
            rightmost_max = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<int> leaders = leaders(arr);
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}