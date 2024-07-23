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
    vector<int> arr = {16, 17, 4, 3, 5};
    vector<int> result = leaders(arr);
    for(int i=0; i < result.size();i++){
       cout << result[i] << " ";
    }
    return 0;
}