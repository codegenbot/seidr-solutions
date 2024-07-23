#include <iostream>
#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = total - 1000;
    if (left < 0) {
        left = 0;
    }
    if (left > remaining) {
        left = remaining;
    }
    return {number + need, left};
}

int main() {
    std::cout << "<" << eat(4, 5, 1)[0] << "> ";
    for(int i=1; i<eat(4, 5, 1)[0]; ++i) {
        if(i%10==9 || i==9) {
            std::cout << "<" << i << "> ";
        } else {
            std::cout << i << " ";
        }
    }
    return 0;
}