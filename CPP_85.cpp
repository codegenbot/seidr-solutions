#include <vector>
#include <cstddef>  // add this header for std::size_t

int add(const std::vector<int>& lst) {
    int sum = 0;
    for (std::size_t i = 1; i < lst.size(); i += 2) {
        if (lst[i] % 2 == 0) {
            sum += lst[i];
        }
    }
    return sum;
}