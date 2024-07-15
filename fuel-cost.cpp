#include <vector>
#include <cmath>

int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int val = static_cast<int>(i / 3) - 2;
        if(val<0)val=0; // adjust here
        sum += val;
    }
    return sum; 
}

int main() {
    std::cout << fuelCost({10,20,30})<<std::endl; 
    return 0;
}