#include <vector>

int basement(std::vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    std::vector<int> v = {2, -3, 4};
    int result = basement(v);
    if (result != -1) {
        std::cout << "The first index with a negative sum is: " << result << std::endl;
    } else {
        std::cout << "No such index found." << std::endl;
    }
    return 0;