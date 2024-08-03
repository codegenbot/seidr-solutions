#include <iostream>
#include <vector>

float max_element(float l){
    float max = l[0];
    for (int i = 1; i <= sizeof...(l); i++) {
        if ((l[i-1]) > max) {
            max = (l[i-1]);
        }
    }
    return max;
}

int main() {
    std::cout << "The maximum element is: " << max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) << std::endl;
    return 0;
}