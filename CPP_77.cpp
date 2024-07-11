```
#include <cmath>
#include <cassert>

bool iscuber(int a){
    int i = 1;
    while (pow(i,3) <= a) {
        if (pow(i,3) == a) return true;
        i++;
    }
    return false;

}

int main() {
    assert (iscuber(1728) == true);
    cout << (iscuber(1729) ? "true" : "false");
    return 0;
}