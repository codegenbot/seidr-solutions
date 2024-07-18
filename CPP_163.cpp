#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if (std::vector<int>::size() != std::vector<int>::size()) {
        return false;
    }
    for (size_t i = 0; i < std::vector<int>::size(); ++i) {
        if (std::vector<int>::operator[](i) != std::vector<int>::operator[](i)) {
            return false;
        }
    }
    return true;
}

std::vector<int> generate_integers(int start, int end){
    std::vector<int> result;
    for (int i = start; i <= end; ++i) {
        std::vector<int>::push_back(i);
    }
    return result;
}