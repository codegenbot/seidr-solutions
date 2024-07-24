```
#include <cmath>
#include <iostream>

bool iscuber(int a){
    int c = round(cbrt(a));
    return (c*c*c == a);
}

int main() {
    // Your code here
}