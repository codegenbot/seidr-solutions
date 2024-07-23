```
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {17, 11, 10, 12};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int rightmost = arr.back();
    vector<int> result;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}