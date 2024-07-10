#include <cmath>
using namespace std;

bool iscuber(int a){
    int root = round(cbrt(a));
    return (root * root * root) == a;
}

int main() {
    assert(iscuber(1729) == false);
    return 0;
}