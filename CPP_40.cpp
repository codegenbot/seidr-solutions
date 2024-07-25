#include <iostream>
#include <vector>

bool triples_sum_to_zero(std::vector<int>& l) {
    for (int i = 0; i < l.size() - 2; i++) {
        for (int j = i + 1; j < l.size() - 1; j++) {
            for (int k = j + 1; k < l.size(); k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> numbers = {1, -2, 1, 0, 5, -1};
    if (triples_sum_to_zero(numbers)) {
        std::cout << "There exists a triple in the array that sums to zero." << std::endl;
    } else {
        std::cout << "No triple in the array sums to zero." << std::endl;
    }

    return 0;
}