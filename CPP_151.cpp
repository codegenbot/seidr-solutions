#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst = {1.0f, 2.5f, 3.0f, -4.0f, 10.5f};
    assert(double_the_difference(lst) == 82);
    return 0;
}

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(float x : lst) {
        if(x > 0 && int(x) == x) {
            sum += pow(int(x), 2);
        }
    }
    return sum;
}