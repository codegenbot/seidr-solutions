```c++
#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--) {
        bool isLeader = true;
        for (int j = i + 1, k = n - 1; j < k; j++, k--) {
            if (arr[i] <= arr[j]) {
                isLeader = false;
                break;
            }
            if (k > j && arr[k] <= arr[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            result.push_back(arr[i]);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {17, 201, 505, 93, 333, 757, 604, 80, 988, 681, 249, 569, 635, 659, 692, 183, 780, 465};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << endl;
    }
    return 0;
}