#include <vector>
#include <iostream>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = std::floor((i / 3.0)) - 2; 
        if(temp < 0)
            temp = 0;
        sum += temp;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n; // Input the number of integers to follow
    std::vector<int> v; // Create an empty vector
    for (int i = 0; i < n; ++i) { // Read and store all integers
        int x; 
        std::cin >> x;
        v.push_back(x); 
    }
    int result = fuelCost(v);
    std::cout << "The fuel cost is: " << result << std::endl;
    return 0;
}