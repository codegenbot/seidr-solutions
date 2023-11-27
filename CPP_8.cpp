#include <vector>

std::vector<int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    std::vector<int> result;
    result.push_back(sum);
    result.push_back(product);

    return result;
}

bool are_equal(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    // Test cases
    std::vector<int> numbers1 = {1, 2, 3, 4};
    std::vector<int> numbers2 = {5, 6, 7, 8};
    std::vector<int> result1 = sum_product(numbers1);
    std::vector<int> result2 = sum_product(numbers2);
    
    // Print the results
    for (int i = 0; i < result1.size(); i++) {
        std::cout << result1[i] << " ";
    }
    std::cout << std::endl;
    
    for (int i = 0; i < result2.size(); i++) {
        std::cout << result2[i] << " ";
    }
    std::cout << std::endl;
    
    // Check if the results are equal
    bool equal = are_equal(result1, result2);
    
    // Print the result
    std::cout << equal << std::endl;

    return 0;
}