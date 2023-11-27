#include <vector>
#include <cassert>
#include <iostream>

std::vector<int> f(int n){
    std::vector<int> result;
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            int factorial = 1;
            for(int j=1; j<=i; j++){
                factorial *= j;
            }
            result.push_back(factorial);
        }
        else{
            int sum = 0;
            for(int j=1; j<=i; j++){
                sum += j;
            }
            result.push_back(sum);
        }
    }
    return result;
}

int main(){
    assert (f(3) == std::vector<int>{1, 2, 6}); // Check if the function returns the expected result
    std::cout << "Test case passed!" << std::endl; // Output a success message
    return 0;
}