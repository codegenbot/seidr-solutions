```cpp
#include <bits/stdc++.h>

int solutions(std::vector<int> lst) {
    int count = 0;
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] % lst[0] == 0 || lst[0] % lst[i] == 0)
            count++;
    }
    return count;
}

int main() {
    std::vector<int> lst = {3, 13, 2, 9};
    if (solutions(lst) == -1) {
        std::cout << "Error: Please enter a valid input." << std::endl;
    }
    int result = solutions(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}