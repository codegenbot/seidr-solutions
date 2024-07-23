```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    return leaders;
}

int main() {
    vector<int> arr = {17, 11, 13, 2, 23, 19};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}