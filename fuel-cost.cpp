```c++
#include <vector>
#include <cmath>

int main() {
    std::vector<int> v; // read from user input
    int num;
    while (std::cin >> num) {
        v.push_back(num);
    }
    int result = fuelCost(v);
    return 0;
}

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double temp = std::floor((double)i / 3.0);
        temp -= 2;
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    } 
    return sum;
}