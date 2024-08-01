#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;  
    float odd_sum = 0.0;     
    for(float i=1.5;i<=10.5;i+=0.5){ 
        lst.push_back(i); 
    }    
    for (float num : lst) { 
        if(modf(num, &num) != 0) {
            odd_sum += num;
        }
    }
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}