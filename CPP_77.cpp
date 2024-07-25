#include <cmath>

bool iscuber(int a) {
    int i = 0;
    while (1) {
        if(pow(i,3) == a) return true;
        else if(++i*i > a) return false;
    }
}