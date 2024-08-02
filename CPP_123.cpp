#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n){
    std::vector<int> result;
    while(n != 1){
        result.push_back(n);
        if(n % 2 == 0){
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    
    std::vector<int> oddNumbers;
    for(int num : result){
        if(num % 2 != 0){
            oddNumbers.push_back(num);
        }
    }
    
    std::sort(oddNumbers.begin(), oddNumbers.end());
    
    return oddNumbers;
}

int main(){
    int number;
    std::cin >> number;
    std::vector<int> result = get_odd_collatz(number);
    return 0;
}