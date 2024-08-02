```cpp
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

    std::cout << "Enter number of elements: ";
    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr.push_back(i);
    }

    std::cout << "Enter value of k: ";
    std::cin >> k;

    int result = add_elements(arr, k);

    std::cout << "Sum of elements is: " << result << std::endl;

    return 0;
}