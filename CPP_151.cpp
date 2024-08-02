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
    std::vector<float> lst = {1.5f, 2.0f, 3.75f};
    long long result = double_the_difference(lst);
    std::cout << "The output is: " << result << std::endl;
    return 0;
}