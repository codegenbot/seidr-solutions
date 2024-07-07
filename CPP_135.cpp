```cpp
#include <vector>
using namespace std;

int can_arrange(vector<int> arr);

int main() {
    vector<int> v = {1, 2, 3, 4};
    cout << "Array: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
    int result = can_arrange(v);
    if(result == -1)
        cout << "The array is already sorted." << endl;
    else
        cout << "First out of order element: " << result << endl;
    return 0;
}

int can_arrange(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i - 1;
        }
    }
    return -1;
}