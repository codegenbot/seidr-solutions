#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 3.0f, 4.5f};
    int result = double_the_difference(lst);
    std::cout << "The output is: " << result << std::endl;
    
    return 0;
}