#include <cstdlib>
#include <ctime>

int add(int x,int y){
    return x+y;
}

int random_number() {
    srand(time(0));
    return rand();
}