#include <cassert>
#include <cstdlib>
#include <ctime>

int add(int x, int y) {
    return x + y;
}

void solve() {
    srand(time(0));
    int x = rand() % 1000;
    int y = rand() % 1000;
    
    assert(add(x, y) == x + y);
}

int main() {
    solve();
    
    return 0;
}