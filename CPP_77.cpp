```cpp
#include <cmath>
bool iscuber(int a){
    int i = 1;
    while (pow(i, 3) <= a) {
        if (pow(i, 3) == a) return true;
        i++;
    }
    return false;
}
int main(){
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    if(iscuber(a))
        std::cout << "The number is a perfect cube." << std::endl;
    else
        std::cout << "The number is not a perfect cube." << std::endl;
    return 0;
}