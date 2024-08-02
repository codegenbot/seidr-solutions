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
    std::vector<float> lst = {1.5f, 2.3f, 3.4f};
    assert (double_the_difference(lst) == 28 );
    return 0;
}