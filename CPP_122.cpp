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
    std::vector<int> input_vector;
    int num_elements, k;

    // Read the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> num_elements;

    // Read the elements
    for(int i=0; i<num_elements; i++){
        std::cout << "Enter element " << i+1 << ": ";
        int temp;
        std::cin >> temp;
        input_vector.push_back(temp);
    }

    // Read k
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    // Call the function and print the result
    int sum = add_elements(input_vector, k);
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}