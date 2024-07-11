#include <iostream>
#include <cassert>
#include <cmath>

bool is_simple_power(int x, int n) {
    if(x == 1) return true;
    
    for(int i = 2; i <= sqrt(x); i++){
        int p = i;
        while(p <= x){
            if(p == x) return true;
            p *= i;
        }
    }
    
    return false;
}

int main() {
    assert(is_simple_power(1, 1)==true);
    assert(is_simple_power(4, 2)==true);
    assert(is_simple_power(27, 3)==true);

    return 0;
}