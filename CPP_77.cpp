#include <cmath>
bool iscuber(int a){
    int c = round(cbrt(a));
    return (double)c*c*c == a;
}