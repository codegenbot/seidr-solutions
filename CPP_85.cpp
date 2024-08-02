```cpp
#include <vector>
#include <iostream>

int add(std::vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}

int main() {
    std::vector<int> input;
    int num;

    // Read numbers from user
    while(std::cin >> num) {
        input.push_back(num);
    }

    // Check if the vector is not empty
    if(input.size() > 0) {
        int result = add(input);
        std::cout << "Sum of even numbers: " << result << std::endl;
    } else {
        std::cout << "No numbers entered." << std::endl;
    }

    return 0;
}