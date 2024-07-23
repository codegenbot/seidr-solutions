#include <cmath>
bool iscuber(int a){
    int i = static_cast<int>(round(cbrt(a)));
    return (i*i*i == a);
}