#include <cmath>
bool iscuber(int a){
    int i = 0;
    while (1) {
        if (pow(i, 3) == a) return true;
        if (i * i > a) return false;
        i++;
    }
}

int main() {
    assert(iscuber(1729) == false);
    // Add more code here...
    return 0;
}