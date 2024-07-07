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

void original_main() {
    int arr[] = {3, 13, 2, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    std::cout << "Result: " << solution(std::vector<int>(arr, arr+n)) << std::endl;
    return;
}

int main() {
    original_main();
    return 0;
}