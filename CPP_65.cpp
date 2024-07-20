#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

string circular_shift(int x, int shift){
    string numStr = to_string(x);
    int n = numStr.length();
    shift = shift % n;
    
    if(shift == 0){
        return numStr;
    }
    
    reverse(numStr.begin(), numStr.end());
    reverse(numStr.begin(), numStr.begin() + shift);
    reverse(numStr.begin() + shift, numStr.end());
    
    return numStr;
}