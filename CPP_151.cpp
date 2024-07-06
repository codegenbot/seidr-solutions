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
    std::vector<float> input; // read input from user
    float num;
    while (std::cin >> num) {
        input.push_back(num);
    }
    // process the input
    float output = double_the_difference(input);
    // print the output
    std::cout << "The doubled difference is: " << output << std::endl;
    return 0;
}