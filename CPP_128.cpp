#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    int signProd = 1;
    int sumMag = 0;
    
    for(int num : arr){
        if(num == 0) return -32768; // Return -32768 for empty arr.
        int sign = (num > 0)? 1 : ((num < 0)? -1 : 0);
        signProd *= sign;
        sumMag += abs(num); 
    }
    
    return signProd * sumMag;
}