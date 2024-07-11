#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(float num : lst){
        if(num > 0 && (int)num == num){
            sum += pow((int)num,2);
        }
    }
    return sum;

}

int main() {
    std::vector<float> lst = {1.5f, 3.25f, -0.75f};
    long long result = double_the_difference(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}