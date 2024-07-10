#include <cmath>

bool iscuber(int a){
    int i = 1;
    while (i <= sqrt(double(a))) {
        int cubed = pow(i, 3);
        if (cubed == a)
            return true;
        i++;
    }
    return false;
}