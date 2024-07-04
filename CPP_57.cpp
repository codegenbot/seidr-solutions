#include <vector>
#include <iostream>
#include <cassert>

bool monotonic(const std::vector<int>& l) {
    bool increasing = true, decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > l[i-1]) decreasing = false;
        if (l[i] < l[i-1]) increasing = false;
    }
    return increasing || decreasing;
}

int main() {
    // Test cases
    assert(monotonic({1, 2, 2, 3}) == true);
    assert(monotonic({6, 5, 4, 4}) == true);
    assert(monotonic({1, 3, 2}) == false);
    assert(monotonic({9, 9, 9, 9}) == true);

    // User input test
    std::vector<int> inputVec;
    int num, size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> num;
        inputVec.push_back(num);
    }

    std::cout << (monotonic(inputVec) ? "The sequence is monotonic." : "The sequence is not monotonic.") << std::endl;

    return 0;
}