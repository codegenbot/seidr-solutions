#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (auto num : lst) {
        if (num > 0 && int(num) == num) {
            sum += pow(int(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> input_list; 
    long long odd_sum = double_the_difference(input_list); 
    assert(double_the_difference(input_list) == odd_sum); 
    return 0;
}