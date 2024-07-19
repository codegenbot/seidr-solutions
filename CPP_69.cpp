```c++
#include <iostream>
#include <vector>

int search(std::vector<int> lst) {
    int max = lst[0];
    for (int i = 1; i < 5; ++i) {
        if (lst[i] > max) {
            max = lst[i];
        }
    }
    return max;
}

int main() {
    std::vector<int> lst(5); 
    for (int i = 0; i < 5; ++i) { 
        std::cin >> lst[i]; 
    }
    int result = search(lst);
    std::cout << "The largest number in the list is: " << result << std::endl;
    return 0;
}