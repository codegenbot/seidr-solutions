#include <vector>
#include <iostream>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3) - 2; 
        if (temp < 0)
            temp = 0;
        sum += temp; 
    }
    return sum;
}

int main() {
    std::vector<int> v;
    v.push_back(3068);
    v.push_back(2275);
    v.push_back(9353);
    v.push_back(5148);
    v.push_back(3504);
    v.push_back(1085);
    v.push_back(4060);
    v.push_back(8440);
    v.push_back(8433);
    v.push_back(1974);
    v.push_back(7951);
    v.push_back(9240);

    int result = fuelCost(v);
    std::cout << "The fuel cost is: " << result << std::endl;
    return 0;
}