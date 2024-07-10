#include <iostream>
#include <algorithm>

int main() {
    std::cout << "Enter the number of elements: ";
    int n;
    std::cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::string s;
        std::cin >> s;
        arr[i] = s.length(); 
    }

    auto max_value = *std::max_element(arr, arr+n);

    std::cout << "Maximum length: " << max_value << std::endl;

    return 0;
}