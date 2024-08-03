```
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int result = 0;
    for(float num : lst) {
        int ceil_num = ceil(num);
        result += pow(ceil_num, 2);
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1.5f, 2.3f, 3.8f};
    int output = sum_squares(numbers);
    return output;
}