#include <iostream>
#include <cassert>

int largest_divisor(int n){
    for(int i = n-1; i > 0; i--){
        if(n % i == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    assert(largest_divisor(49) == 7);
    return 0;
}