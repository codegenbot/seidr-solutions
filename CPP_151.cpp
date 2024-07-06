#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x >= 0 && (int)x == x) {
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> input; 
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    input.resize(n);

    std::cout << "Enter elements (space separated): ";
    for(int i = 0 ; i < n; ++i) {
        std::cin >> input[i];
    }

    float output = double_the_difference(input);
    std::cout << "Double the difference: " << output << std::endl;
    
    return 0;
}