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
    std::vector<int> arr;
    int n, k;

    // Input
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> arr[i];
    }
    std::cout << "Enter k: ";
    std::cin >> k;

    // Call the function and print output
    int result = add_elements(arr, k);
    std::cout << "Sum of elements that satisfy the condition is: " << result << std::endl;
    
    return 0;
}