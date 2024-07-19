#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    assert(a.size() == b.size());

    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    for(int i = 1; i <= n; ++i){
        result[i-1] = (i % 2 == 0) ? factorial(i) : i * (i + 1) / 2;
    }
    return result;
}

int main() {
    std::vector<int> expected{1, 2, 6, 4, 15};

    std::vector<int> result = f(5);

    if (issame(result, expected)) {
        std::cout << "Test Passed!\n";
    } else {
        std::cout << "Test Failed!\n";
    }

    return 0;
}