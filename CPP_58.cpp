#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n1, n2;
    std::vector<int> v1, v2;

    // Read first set of integers
    std::cout << "Enter number of elements in the first vector: ";
    std::cin >> n1;
    for (int i = 0; i < n1; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        v1.push_back(x);
    }

    // Read second set of integers
    std::cout << "\nEnter number of elements in the second vector: ";
    std::cin >> n2;
    for (int i = 0; i < n2; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        v2.push_back(x);
    }

    // Compare the vectors
    assert(issame(v1, v2));

    return 0;
}