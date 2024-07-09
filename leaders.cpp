#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxRightSoFar = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRightSoFar) {
            result.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    return result;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    leaders(arr);
    return 0;
}