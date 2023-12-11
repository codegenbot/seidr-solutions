```
#include <vector>
#include <iostream>
using namespace std;

// Your existing leaders function goes here

int main() {
    vector<int> v = {1, 451}; // Example input
    vector<int> result = leaders(v);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
```