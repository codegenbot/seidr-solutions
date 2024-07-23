#include <vector>
#include <iostream>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3) - 2; 
        if(temp < 0)
            temp = 0;
        sum += temp;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n; // Input a single integer
    std::vector<int> v(1, n); // Create a vector with the input integer
    int result = fuelCost(v);
    std::cout << "The fuel cost is: " << result << std::endl;
    return 0;
}