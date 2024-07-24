```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 2, 3}; // Example input
    vector<int> result = leaders(arr);
    for (int leader : result) {
        cout << leader << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            result.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    return result;
}