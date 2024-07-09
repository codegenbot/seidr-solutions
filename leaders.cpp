#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxRight = arr.back();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            while (i < n - 1 && arr[i] >= arr[i + 1]) {
                maxRight = arr[i];
                i--;
            }
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {5, 2, 3, 4};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}