#include <cstdlib>

int add(int x,int y){
    return x+y;
}

int main(){
    srand(time(0)); // Initialize random seed
    int x=rand()%1000;  
    return 0;
}