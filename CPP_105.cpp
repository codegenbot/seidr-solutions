```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr;
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }

    std::vector<std::string> result = by_length(arr);

    std::cout << "Expected Output: ";
    for (int i = 0; i < n; i++) {
        if (i < n-1)
            std::cout << "One";
        else
            std::cout << "Nine";
    }
    std::cout << std::endl;

    if (issame(result, {"Seven", "Six", "Five", "Four", "Three", "Two", "One"}))
        std::cout << "Output is same as expected.\n";
    else
        std::cout << "Output is not same as expected.\n";

    return 0;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> numbers;
    for (int num : arr) {
        if (issame(num)) {
            numbers.push_back(num);
        }
    }
    std::sort(numbers.begin(), numbers.end());
    std::reverse(numbers.begin(), numbers.end());
    std::vector<std::string> result;
    for (int num : numbers) {
        std::string str = "";
        switch (num) {
            case 1:
                str = "One";
                break;
            case 2:
                str = "Two";
                break;
            case 3:
                str = "Three";
                break;
            case 4:
                str = "Four";
                break;
            case 5:
                str = "Five";
                break;
            case 6:
                str = "Six";
                break;
            case 7:
                str = "Seven";
                break;
            case 8:
                str = "Eight";
                break;
            case 9:
                str = "Nine";
                break;
        }
        result.push_back(str);
    }
    return result;
}