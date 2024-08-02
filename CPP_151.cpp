#include <vector>
#include <cmath>

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
    std::vector<float> lst = {1.5f, -3.25f, 2.75f, 0.5f};
    long long result = double_the_difference(lst);
    std::cout << "The difference is: " << result << std::endl;
    return 0;
}