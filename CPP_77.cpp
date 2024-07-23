```cpp
#include <cmath>
#include <cassert>
#include <cctype>
#include <cstddef>

bool iscuber(int a) {
    int i = 1;
    while (pow(i,3) <= a){
        if(pow(i,3) == a)
            return true;
        i++;
    }
    return false;

}

int main() { 
    assert(iscuber(8) == true);
}