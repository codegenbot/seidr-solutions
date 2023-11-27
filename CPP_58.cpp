#include <vector>
#include <algorithm>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    // Sort both vectors
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());

    // Create a vector to store the common elements
    std::vector<int> commonElements;

    // Iterate through both vectors and find the common elements
    int i = 0;
    int j = 0;
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] < l2[j]) {
            i++;
        } else if (l1[i] > l2[j]) {
            j++;
        } else {
            // Found a common element
            commonElements.push_back(l1[i]);
            i++;
            j++;
        }
    }

    // Remove duplicates from commonElements vector
    commonElements.erase(std::unique(commonElements.begin(), commonElements.end()), commonElements.end());

    return commonElements;
}

int main() {
    assert(common(std::vector<int>({4, 3, 2, 8}), std::vector<int>({})) == std::vector<int>({}));
    assert(common(std::vector<int>({4, 3, 2, 8}), std::vector<int>({2, 5, 4}))) == std::vector<int>({2, 4}));
    // additional test cases
    
    return 0;
}