#include <cstdlib>

int add(int x, int y){
    return x + y;
}

int main() {
    int x = rand() % 1000;
    int y = rand() % 1000;
    int result = add(x, y);
    return 0;
}