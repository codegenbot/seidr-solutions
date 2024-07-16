#include <vector>

int solutions(std::vector<int> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}
// In the main function, call the solutions function with the input vector. Example: assert(solutions({3, 13, 2, 9}) == 3);