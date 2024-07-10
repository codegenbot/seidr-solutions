#include <cmath>

bool iscuber(int a){
    int i = 1;
    while (true) {
        int cubed = pow(i, 3);
        if (cubed > a)
            return false;
        else if (cubed == a)
            return true;
        i++;
    }
}