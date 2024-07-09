#include <iostream>
#include <vector>
#include <map>

int search(std::vector<int> lst) {
    std::map<int, int> freq(lst.begin(), lst.end());
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            return it->first * it->second;
        }
    }
    return -1;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> lst;
    lst.resize(n, 0); 

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> lst[i];
    }

    int result = search(lst);

    if (result == -1)
        std::cout << "No such number exists in the list.\n";
    else
        std::cout << "The first number that is a multiple of its frequency is: " << result << "\n";

    return 0;
}