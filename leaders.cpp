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
    int maxRightSoFar = arr.back(); // The rightmost element is always a leader
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRightSoFar) {
            result.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    reverse(result.begin(), result.end()); // Reverse the order of leaders
    return result;
}