Here is the completed code:

```cpp
#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int signProd = 1;
    long long sumMag = 0;
    
    if(arr.empty())
        return -32768;
        
    for(int num : arr){
        if(num == 0)
            return 0;
        signProd *= (num > 0 ? 1 : ((num < 0) ? -1 : 0));
        sumMag += abs(num);
    }
    
    return signProd * sumMag;
}