#include <cmath>
bool iscuber(int a);
int main() {
    // ...
    assert(iscuber(1729) == false);
}

bool iscuber(int a){
    int c = (int)cbrt(a);
    return a == pow(c, 3);
}