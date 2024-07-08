```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr;    
    for(int i=0; i<5; i++) {
        int n;
        std::cout << "Enter a number: ";
        std::cin >> n;
        arr.push_back(n);
    }
    std::vector<std::string> result = "";
    // Add your logic here to process the vector
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            // Convert int to string and add to result vector
            result.push_back(std::to_string(num));
        }
    }
    std::sort(result.begin(), result.end());
    std::reverse(result.begin(), result.end());
    for (std::string str : result) {
        std::cout << str << std::endl;
    }
    return 0;
}