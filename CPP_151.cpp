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
    float n;
    long long odd_sum = 0;

    // code to get input from user and call double_the_difference function
    for(int i = 0; i < 10; i++){
        std::cout << "Enter a number: ";
        std::cin >> n;
        lst.push_back(n);
    }

    for(auto num : lst){
        if(num > 0 && int(num) == num){
            odd_sum += pow(int(num), 2);
        }
    }

    assert (double_the_difference(lst) == odd_sum );
    return 0;
}