````
#include <vector>
using namespace std;

int main() {
    vector<int> leaders = leaders({1, 3, 4, 2});
    // do something with leaders...
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    leaders.push_back(rightmost);
    return leaders;
}
```