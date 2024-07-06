#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            sum += pow(int(x), 2);
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 3.8, 2.9, 4.5, 6.7};
    long long odd_sum = double_the_difference(lst);
    std::cout << "The odd_sum is: " << odd_sum << std::endl;
    return 0;
}