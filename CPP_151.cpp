#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(float x : lst) {
        if(x > 0 && int(x) == x) {
            sum += pow(int(x), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 3.7f, -4.2f, 2.8f};
    long long expected_sum = double_the_difference(lst);

    return 0;
}