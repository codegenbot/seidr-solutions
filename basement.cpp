```cpp
#include <vector>
using namespace std;

int basement(vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {-5, -2, 3, -10};
    int result = basement(arr);
    cout << "Result: " << result << endl;
    return 0;
}