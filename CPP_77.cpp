#include <cmath>
bool iscuber(int a){
    return std::cbrt(a) == round(std::cbrt(a));
}