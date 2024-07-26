#include <cassert>
#include <cstdlib>
#include <ctime>

int contestProblem(int x, int y) {
    return x + y;
}

int main() {
    srand(time(0));
    int x = rand() % 1000;
    int y = rand() % 1000;
    
    assert(contestProblem(x, y) == x + y);
    
    return 0;
}