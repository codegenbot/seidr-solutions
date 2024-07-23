#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = std::floor((double)i / 3) - 2; 
        if(temp < 0)
            temp = 0;
        sum += temp;
    }
    return sum;
}

int main() {
    std::vector<int> v; // input from user
    for(int i=0; i<20; i++) {
        int num; 
        std::cin >> num;
        v.push_back(num);
    }
    int result = fuelCost(v);
    return 0;
}