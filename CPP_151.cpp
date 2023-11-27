#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 != 0) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2, 3.5, 4, 5.5}; // Fill in appropriate values for lst
    
    long long odd_sum = double_the_difference(lst); // Assign the return value of double_the_difference to odd_sum
    
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}