```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int rightmostLeaderIndex = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || arr[i] >= arr[rightmostLeaderIndex]) {
            rightmostLeaderIndex = i;
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {17, 185, 100, 23};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}