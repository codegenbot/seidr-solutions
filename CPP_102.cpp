```c++
#include <iostream>

using namespace std;

int choose_num(int x, int y) {
    if(x % 2 == 0 && y >= x)
        return y;
    else if(y % 2 != 0 || x > y)
        return -1;
    else if(x % 2 == 0)
        return x;
    else
        for(int i = x; i <= y; i++){
            if(i % 2 == 0){
                return i;
            }
        }
    return -1;
}

//int main() {
    int x, y;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    cout << "The biggest even integer is: " << choose_num(x,y) << endl;
    return 0;
//}