#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        if(log10(arr[i]+1) <= 2) sum += arr[i];
    }
    return sum;
}

int main(){
    std::vector<int> input;
    int n, k;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i=0; i<n; i++){
        std::cout << "Enter element " << (i+1) << ": ";
        int temp;
        std::cin >> temp;
        input.push_back(temp);
    }
    
    std::cout << "Enter the value of k: ";
    std::cin >> k;
    
    int result = add_elements(input, k);
    
    std::cout << "The sum is: " << result << std::endl;
    
    return 0;
}