#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(float num : lst) {
        if(num > 0 && modf((double)num, &num) == 0.0) {
            sum += pow((double)num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0f, 2.0f, 3.0f};
    assert(double_the_difference(lst) == 14);
    return 0;
}