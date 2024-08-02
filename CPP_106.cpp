#include <vector>
#include <iostream>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2){
    if(v1.size() != v2.size()) {
        return false;
    }

    for(size_t i = 0; i < v1.size(); ++i) {
        if(v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> f(int n) {
    std::vector<int> result;
    int sum = 0;
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            factorial *= i;
            result.push_back(factorial);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    return result;
}

int main() {
    int n = 5; // Example input
    std::vector<int> output = f(n);
    for (int num : output) {
        std::cout << num << " ";
    }

    std::vector<int> test1 = {1, 3, 3, 15, 15}; // Example comparison vector
    bool isSame = issame(output, test1);
    std::cout << std::endl << "Is the output same as the test vector? " << std::boolalpha << isSame;

    return 0;
}