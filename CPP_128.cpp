Here is the completed code:

```cpp
#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    if(arr.empty()) return -32768;
    int signProd = 1, sumMag = 0;
    for(int num : arr){
        if(num != 0)
            signProd *= (num > 0 ? 1 : -1);
        sumMag += abs(num);
    }
    return sumMag * signProd;
}