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
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.5};
    assert(double_the_difference(lst) == 30);
    return 0;
}