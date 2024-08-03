#include <vector>
#include <algorithm>

bool below_threshold(std::vector<int> l, int t) {
    for (int i : l) {
        if (i >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> list = {1, 2, 3, 4};
    int threshold = 3;

    bool result = below_threshold(list, threshold);

    if (result) {
        std::cout << "All elements are below the threshold." << std::endl;
    } else {
        std::cout << "At least one element is not below the threshold." << std::endl;
    }

    return 0;
}