#include <iostream>
#include <string>

bool starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if ((to_string(i)).find("1") != std::string::npos || (to_string(i)).find(to_string(i).substr(0, 1)) != std::string::npos)
            ++count;
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    int result = starts_one_ends(n);
    std::cout << "The count of the numbers of " << to_string(n) << "-digit positive integers that start or end with 1 is: " << result << std::endl;
    return 0;
}