#include <cmath>
using namespace std;

bool iscuber(int a){
    int c = (int)cbrt(a);
    return c*c*c == a;
}

int main() {
    assert(iscuber(1729) == false);
    // Your test cases or other code here.
    return 0;
}