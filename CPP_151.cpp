#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst);

int main() {
    std::vector<float> lst; 
    return 0;
}

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst) {
        if(int(x) > 0 && int(x) == round(x)) {
            sum += pow(int(x), 2);
        }
    }
    return sum;
}