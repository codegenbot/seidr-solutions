#include <cassert>
#include <cstdlib>
#include <ctime>

int contestProblem(int x, int y) {
    // Add your code for the contest problem here
}

int main() {
    srand(time(0));
    int x = rand() % 1000;
    int y = rand() % 1000;
    
    assert(x + y == x + y);
    
    contestProblem(x, y);
    
    return 0;
}