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
    int k;

    // Read input from user
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    
    for(int i=0; i<k; i++){
        int num;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> num;
        arr.push_back(num);
    }

    // Calculate and print the sum
    int result = add_elements(arr, k);
    std::cout << "Sum of elements: " << result << std::endl;

    return 0;
}