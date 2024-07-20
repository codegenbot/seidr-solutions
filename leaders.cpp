````
#include <vector>
using namespace std;

int main() {
    vector<int> leaders = leaders({1, 3, 4, 2});
    // do something with leaders...
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    if (arr.empty()) {
        return result;
    }
    
    int rightmost = arr.back();
    result.push_back(rightmost);
    
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            result.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}
```