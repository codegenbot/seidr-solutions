```c++
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 2, 7};
    vector<int> leadersResult = leaders(arr);
    for (int i : leadersResult) {
        cout << i << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxRightSoFar = arr[n - 1];
    result.push_back(maxRightSoFar);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRightSoFar) {
            maxRightSoFar = arr[i];
            result.push_back(arr[i]);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}