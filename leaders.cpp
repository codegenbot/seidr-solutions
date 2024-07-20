```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    leaders.push_back(rightmost);
    return leaders;
}

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leaders = leaders(arr);
    // Do something with the leaders vector
    return 0;
}