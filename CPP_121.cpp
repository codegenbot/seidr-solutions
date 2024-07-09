```cpp
#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst = {1, 3, 5, 4, 6};
    int result = solution(lst);
    std::cout << "The sum of the odd elements at even positions is: " << result << std::endl;
    return 0;
}