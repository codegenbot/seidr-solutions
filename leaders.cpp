```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int max_right = arr.back();
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] > max_right) {
            leaders.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    leaders.push_back(arr.back());
    return leaders;
}

int main() {
    vector<int> arr = {1, 3, 4, 3, 2};
    vector<int> leadersRes = leaders(arr);
    for (int num : leadersRes) {
        cout << num << " ";
    }
    return 0;
}