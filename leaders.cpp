```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    arr.resize(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> result;
    int maxRightSoFar = arr.back();
    for(int i = arr.size() - 1; i >= 0; i--) {
        if(arr[i] >= maxRightSoFar) {
            result.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }

    cout << "Leaders in the array are: ";
    for(auto x : result)
        cout << x << " ";

    return 0;
}