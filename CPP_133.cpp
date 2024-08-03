```cpp
#include <cmath>
#include <vector>

int sum_squares(std::vector<float> lst){
    int result = 0;
    for(float num : lst) {
        int ceil_num = ceil(num);
        result += pow(ceil_num, 2);
    }
    return result;

}

int main() {
    std::vector<float> input;
    float value;
    while (std::cin >> value) {
        input.push_back(value);
    }
    std::cout << sum_squares(input) << std::endl;
    return 0;
}