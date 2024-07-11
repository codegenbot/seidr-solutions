#include <cassert>

bool iscuber(int a){
    int i = 1;
    while (i * i * i <= a) {
        if (i * i * i == a)
            return true;
        i++;
    }
    return false;

}

int main() {
    assert(iscuber(1729) == false);
    return 0;
}