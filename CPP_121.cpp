#include <iostream>
#include <vector>

int solution(std::vector<int> arr) {
    int sum = 0;
    for (int i : arr) {
        if (i % 2 == 1)
            sum += i;
    }
    return sum;
}

int main() { 
    int arr[] = {3, 13, 2, 9}; 
    std::vector<int> arrVector(arr, arr + sizeof(arr)/sizeof(arr[0])); 
    int n = arrVector.size(); 
    int result = solution(arrVector); 
    std::cout << "Result: " << result << std::endl;
    return 0;
}