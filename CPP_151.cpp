#include<vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(x > 0 && (int)x % 2 != 0)
            sum += (x*x);
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0f, 3.0f, 4.5f};
    long long odd_sum = double_the_difference(lst);
    return 0;
}