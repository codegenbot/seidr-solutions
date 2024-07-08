#include <cmath>

bool iscuber(int a){
    int n = round(cbrt(a));
    return (n*n*n == a);
}