#include <iostream>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    float odd_sum; 

    for(int i=1;i<=10;++i){
        if(i%2!=0)
            lst.push_back((float)i); 
    }

    for(float num : lst) {
        if (num > 0 && floor(num) == num) {
            odd_sum += pow(num, 2);
        }
    }

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}