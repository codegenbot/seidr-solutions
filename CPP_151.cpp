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
    std::vector<float> lst; 
    float odd_sum = double_the_difference(lst); 
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}