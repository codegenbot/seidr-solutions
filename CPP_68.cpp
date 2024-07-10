Here is the completed code:

```cpp
#include<vector>
using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<int> result;
    
    if(arr.empty()) {
        return {{}};
    }
    
    int min_even_value = INT_MAX;
    int min_index = -1;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < min_even_value) {
            min_even_value = arr[i];
            min_index = i;
        }
    }
    
    result.push_back(min_even_value);
    result.push_back(min_index);
    
    return {result};
}