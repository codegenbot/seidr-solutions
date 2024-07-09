Here is the completed code:

```cpp
#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    for (int i : arr) {
        if (i != 0)
            product *= (i > 0 ? 1 : -1);
        else
            return -32768; // Return -32768 for empty vector
    }
    return product * abs(arr[0]);
}