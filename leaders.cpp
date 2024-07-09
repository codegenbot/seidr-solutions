```
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {7, 21, 4, 19, 6, 23, 10};
    vector<int> result = leaders(arr);
    for (int i: result) {
        cout << i << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxR = arr.back();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxR) {
            maxR = arr[i];
            result.push_back(maxR);
        }
    }
    return result;
}