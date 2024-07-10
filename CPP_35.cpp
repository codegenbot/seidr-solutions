```cpp
#include <algorithm>
#include <vector>
#include <initializer_list>

using namespace std;

int main() {
    vector<int> arr;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    arr.resize(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int max = *max_element(arr.begin(), arr.end());
    cout << "Maximum element is: " << max << endl;

    return 0;
}