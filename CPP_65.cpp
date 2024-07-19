#include <string>
using namespace std;

string circular_shift(int x, int shift){
    string num = to_string(x);
    int n = num.size();
    shift = shift % n;
    if(shift == 0) return num;
    if(shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    rotate(num.rbegin(), num.rbegin() + shift, num.rend());
    return num;
}