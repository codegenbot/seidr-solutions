Here is the completed code:

```cpp
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int prod_signs(vector<int> arr){
    if(arr.empty())
        return -32768;
    
    int sign_product = 1; // initialize product of signs to 1
    int sum_of_magnitudes = 0; // initialize sum of magnitudes
    
    for(int i : arr){
        sign_product *= (i > 0) ? 1 : ((i < 0)? -1 : 0);
        sum_of_magnitudes += abs(i); // add magnitude to sum
    }
    
    return sign_product * sum_of_magnitudes;
}