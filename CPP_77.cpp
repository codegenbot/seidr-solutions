```cpp
#include <cmath>
#include <cassert>

bool iscuber(int a) {
    int i = 1;
    while (pow(i,3) <= a){
        if(pow(i,3) == a)
            return true;
        i++;
    }
    return false;

}

int cpp77_main() { 
    assert(iscuber(1729) == false);
}