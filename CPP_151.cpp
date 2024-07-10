#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto num : lst){
        if(int(num) > 0 && int(num) == int(num)){
            sum += pow(int(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    float val; 
    while (std::cin >> val) { 
        lst.push_back(val); 
    } 
    long long result = double_the_difference(lst); 
    return 0;
}