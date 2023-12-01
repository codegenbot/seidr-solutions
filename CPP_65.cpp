#include <string>

string circular_shift(int x, int shift);

int main() {
    assert(circular_shift(11, 101) == "11");
    // more test cases...
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