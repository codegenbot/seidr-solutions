#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    int sum = std::accumulate(array.begin(), array.end(), 0);
    if (sum % 2 == 1)
        return array;
    else
        std::sort(array.rbegin(), array.rend());
    return array;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> array(n);
    for (auto &i : array) {
        std::cout << "Enter element " << ++i << ": ";
        if (!(std::cin >> i)) {
            std::cerr << "Invalid input. Please try again." << std::endl;
            return 1;
        }
    }
    
    assert(issame(sort_array(array), array));
}