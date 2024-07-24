```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    return leaders;
}

int main() {
    vector<int> input = {1, 3, 4, 1, 5};
    vector<int> output = leaders(input);
    for(int num : output) {
        cout << num << " ";
    }
    return 0;
}