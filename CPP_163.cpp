#include <vector> // Add this line to include the vector header

std::vector<int> issame(std::vector<int> a, std::vector<int> b){ // Correct the function signature
    std::vector<int> result;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}