#include <vector>
#include <cmath>

long long int double_the_difference(std::vector<float> lst){
    long long int sum = 0; // Corrected the type
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == std::floor(lst[i]) && (int)lst[i] % 2 != 0){ // Added std:: to resolve 'floor' function call
            sum += std::pow(lst[i], 2); // Added std:: to resolve 'pow' function call
        }
    }
    return sum;
}

int main(){
    std::vector<float> lst = {1.5, 2.5, 3.0, 4.5, 5.5}; // Declare the lst vector
    long long int odd_sum = 1*1 + 3*3 + 5*5; // Calculate the expected result
    
    assert (double_the_difference(lst) == odd_sum); // Perform the assertion test

    return 0;
}