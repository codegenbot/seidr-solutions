```c
#include <vector>
#include <cmath>

int main() {
    int sum = 0;
    std::vector<int> v = {10,20,30}; // Provide some input values
    for (int i : v) {
        int temp = std::floor((double)i / 3);
        if (temp < 2) {
            temp = 0;
        } else {
            temp -= 2;
        }
        sum += temp;
    }
    return sum; 
}