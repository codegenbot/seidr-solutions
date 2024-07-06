#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst = {1.2f, 3.4f, 5.6f, 7.8f};
    long long odd_sum = double_the_difference(lst);
    return 0;
}

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            sum += pow(int(x), 2);
    }
    return sum;
}