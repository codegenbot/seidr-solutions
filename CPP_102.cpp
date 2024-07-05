#include <iostream>

int choose_num(int x, int y){
    if (x > y) return -1;
    for (int i = y; i >= x; --i) {
        if (i % 2 == 0) return i;
    }
    return -1;
}

int main() {
    int x, y;
    std::cout << "Enter values of x and y: ";
    std::cin >> x >> y;
    int result = choose_num(x, y);
    if (result != -1) std::cout << "The largest even number is: " << result << std::endl;
    else std::cout << "No even number found in the range." << std::endl;
    return 0;
}