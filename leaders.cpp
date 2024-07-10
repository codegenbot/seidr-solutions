```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    if(n == 0) return res;

    int max_right = arr[n-1];
    for(int i=n-2; i>=0; --i){
        if(arr[i] >= max_right){
            res.push_back(arr[i]);
            max_right = arr[i];
        }
    }

    return res;
}

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leaders_vec = leaders(arr);
    // Do something with the result
    for(int i : leaders_vec) cout << i << " ";
    return 0;
}