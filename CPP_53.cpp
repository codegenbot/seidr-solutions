#include <cstdlib>
#include <ctime>

int add(int x,int y){
    return x+y;
}

int main() {
    srand(time(0));
    int num = rand() % 2;
    if(num == 1) {
        cout << "The sum is: " << add(5,3) << endl;
    } else {
        cout << "The difference is: " << add(10,8) - add(10,8) << endl;
    }
    return 0;
}