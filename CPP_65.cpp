#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

string circular_shift(int x, int shift);

int main() {
    assert (circular_shift(11, 101) == "11");
    
    return 0;
}

string circular_shift(int x, int shift){
    string num = to_string(x);
    int len = num.length();
    
    if(shift > len){
        reverse(num.begin(), num.end());
        return num;
    }
    
    shift %= len;
    rotate(num.rbegin(), num.rbegin() + shift, num.rend());
    
    return num;
}