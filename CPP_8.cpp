#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<long long> sum_product(std::vector<int> numbers) {
    long long sum = 0;
    long long product = 1;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    std::vector<long long> result;
    result.push_back(sum);
    result.push_back(product);

    return result;
}

int main() {
    std::vector<int> input = {10, 20, 30};
    std::vector<long long> result = sum_product(input);

    if (!issame(result, input)) {
        std::cout << "Sum and product are not the same" << std::endl;
    } else {
        std::cout << "Sum and product are the same" << std::endl;
    }

    return 0;
}