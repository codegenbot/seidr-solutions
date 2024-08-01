#include <cmath>
bool iscuber(int a);

bool iscuber(int a){
    int c = round(cbrt(a));
    return (c*c*c == a);
}

int main() {
    assert (iscuber(1729) == false);
    return 0;
}