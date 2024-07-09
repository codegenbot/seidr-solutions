```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int findMax(std::vector<int> numbers) {
    int maxNum = (numbers.empty()) ? -1 : *std::max_element(numbers.begin(), numbers.end());
    if (maxNum != -1)
        std::cout << maxNum << std::endl;
    return 0;
}

int main() {
    using namespace std; 
    vector<int> numbers;
    int num = 0; 
    cout << "Enter numbers (separated by spaces): ";
    while(cin >> num) { 
        while(cin.peek() == ' ') {
            cin.ignore();
        }
        numbers.push_back(num);
        while(cin.get() != '\n') { 
            cin.ignore(); 
        }
    }
    findMax(numbers);
    return 0;
}