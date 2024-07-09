```cpp
#include <cassert>

bool is_simple_power(int x, int n);

bool is_simple_power(int x, int n){
    if(n == 1)
        return true;
    double y = 1.0;
    while(y <= x && n > 0){
        if(y == x) return true;
        y *= (double)n;
        n--;
    }
    return false;
}

int main() {
    assert (is_simple_power(1, 12)==true); 
    return 0; 
}