#include <vector>
#include <cassert>

std::vector<double> double_the_difference(std::vector<double> lst) {
    int odd_sum = 0;
    for (double num : lst) {
        if (num % 2 != 0) {
            odd_sum += num;
        }
    }
    return {static_cast<double>(lst.size()), static_cast<double>(odd_sum)};
}

int main() {
    std::vector<double> input_vector = {(double)1.0, (double)2.0, (double)3.0};
    double lst_size, odd_sum;
    
    std::tie(lst_size, odd_sum) = double_the_difference(input_vector);
    
    assert(double_the_difference(input_vector)[0] == lst_size);
    assert(double_the_difference(input_vector)[1] == odd_sum);
    
    return 0;
}