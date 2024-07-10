```c++
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 0)
        return result;
        
    result.push_back(arr[n - 1]);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > result.back())
            result.push_back(arr[i]);
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    vector<int> arr = {12, 10, 8, 6};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}