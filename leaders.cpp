```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRight = arr.back();
    for(int i = arr.size() - 1; i >= 0; i--) {
        if(arr[i] >= maxRight)
            result.push_back(arr[i]);
        else 
            maxRight = arr[i];
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {17, 11, 13, 2, 23, 19};
    vector<int> result = leaders(arr);
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}