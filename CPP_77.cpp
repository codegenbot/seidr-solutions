#include <cmath>
bool iscuber(int a) {
    int i = 0;
    while (pow(i+1,3) <= a) {
        if(pow(i+1,3) == a) return true;
        i++;
    }
    return false;
}
int main() {
    assert (iscuber(1729) == false);
    // Add your test cases here
    return 0;