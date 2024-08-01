```cpp
#include <vector>
#include <cmath>

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int skjkasdkd(std::vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(isPrime(i) && i > maxPrime)
            maxPrime = i;
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;

}

int main(){
    std::vector<int> lst = {1,2,3,4,5};
    int result = skjkasdkd(lst);
    std::cout << "The output is: " << result << std::endl;
    return 0;
}