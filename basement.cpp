```cpp
#include <vector>
using namespace std;

int basement(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    return basement({-2,3,-4,5,-6,7,-8,9,-10,11});  
}