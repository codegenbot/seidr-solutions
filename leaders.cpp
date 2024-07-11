Here is the modified code:

```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> leaders(vector<int>& arr) {
    vector<string> result;
    int maxRight = to_string(arr.back());
    for(int i = arr.size() - 1; i >= 0; i--) {
        if(to_string(arr[i]) >= maxRight)
            result.push_back(to_string(arr[i]));
        else 
            maxRight = to_string(arr[i]);
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<string> result = leaders(arr);
    for(string i : result)
        std::cout << i << " ";
    return 0;
}