Here is the completed code:

```cpp
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int prod_signs(vector<int> arr){
    int signProduct = 1;
    long long sumMagnitude = 0;

    if(arr.empty())
        return -32768;

    for(int num : arr){
        if(num < 0)
            signProduct *= -1;
        else if(num > 0)
            signProduct *= 1;
        
        sumMagnitude += abs(num);
    }

    return signProduct * sumMagnitude;
}