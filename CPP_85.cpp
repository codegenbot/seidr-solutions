#include <vector>
#include <iostream>

int add(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i += 2) {
        if (lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}

int main() {
    std::vector<int> lst = {10, 12, 15, 20, 22};
    int result = add(lst);
    std::cout << "The sum of the even numbers is: " << result << std::endl;
    return 0;
}