#include <vector>
#include <cmath>
#include <assert.h>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for(float x : lst) {
        if(x > 0 && int(x) == x) {
            sum += pow(int(x), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0f, 2.0f, 3.0f, 4.0f};
    assert (double_the_difference(lst) == 30 );
    return 0;
}