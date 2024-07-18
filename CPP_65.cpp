#include <string>
#include <algorithm>
using namespace std;

string circular_shift(int x, int shift){
    string numStr = to_string(x);
    int n = numStr.size();
    shift %= n;
    if(shift == 0){
        return numStr;
    }
    if(shift > n){
        reverse(numStr.begin(), numStr.end());
        return numStr;
    }
    reverse(numStr.begin(), numStr.begin() + n - shift);
    reverse(numStr.begin() + n - shift, numStr.end());
    reverse(numStr.begin(), numStr.end());
    return numStr;
}