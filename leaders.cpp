```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    int max_right = arr.back();
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] >= max_right) {
            res.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    return res;
}

int main() {
    vector<int> arr = {17, 28, 4, 27, 29, 31, 26};
    vector<int> leaders_result = leaders(arr);
    // print the result or use it as needed
    return 0;
}