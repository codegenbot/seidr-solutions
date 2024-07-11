#include <vector>
using namespace std;

int prod_signs(vector<int> arr){
    if(arr.empty()) return -32768;
    
    int signProduct = 1;
    int sumMagnitudes = 0;
    
    for(int num : arr){
        if(num > 0) signProduct *= 1;
        else if(num < 0) signProduct *= -1;
        
        sumMagnitudes += abs(num);
    }
    
    return signProduct * sumMagnitudes;
}