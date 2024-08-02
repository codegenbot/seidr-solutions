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

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i=0; i<n; i++){
        int num;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> num;
        arr.push_back(num);
    }

    std::cout << "Enter the value of k: ";
    std::cin >> k;

    int result = add_elements(arr, k);

    std::cout << "Sum of elements is: " << result << std::endl;

    return 0;
}