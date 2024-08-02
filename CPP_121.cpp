#include <vector>
#include <iostream>

int main() {
    int sum = 0;
    std::vector<int> lst;
    int num;

    // Read numbers from user
    std::cout << "Enter some integers (enter -1 to finish):" << std::endl;
    while ((std::cin >> num) && (num != -1)) {
        lst.push_back(num);
    }

    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }

    // Print the result
    std::cout << "Sum of odd numbers: " << sum << std::endl;

    return 0;
}