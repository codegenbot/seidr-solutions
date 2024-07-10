```cpp
#include <cmath>
bool iscuber(int a){
    int i = 1;
    while (1) {
        if (pow(i, 3) == a) return true;
        if (i * i > a) return false;
        i++;
    }
}
int main() {
    assert(iscuber(1729) == false);
    return 0;
}