```cpp
#include <iostream>
#include <vector>

int add(std::vector<int> lst) {
    int sum = 0;
    for(int i=1; i<lst.size(); i++){
        if(i%2!=0) sum += lst[i];
    }
    return sum;
}

int main() {
    std::vector<int> numbers;
    int n;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;

    for(int i=1; i<=n; i++){
        std::cout << "Enter element " << i << ": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    int result = add(numbers);

    std::cout << "The sum of odd positioned elements is: " << result;

    return 0;
}