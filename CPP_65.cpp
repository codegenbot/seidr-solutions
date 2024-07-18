#include <string>
#include <algorithm>
using namespace std;

string circular_shift(int x, int shift){
    string num_str = to_string(x);
    int n = num_str.size();
    shift %= n;
    
    if(shift == 0){
        return num_str;
    }
    
    string result = num_str.substr(n - shift) + num_str.substr(0, n - shift);
    
    if(shift > n){
        reverse(result.begin(), result.end());
    }
    
    return result;
}