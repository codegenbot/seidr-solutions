```cpp
#include <initializer_list>
#include <vector>
#include <algorithm>

bool areVectorsEqual(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    auto last = std::unique(result.begin(), result.end());
    result.erase(last, result.end());
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {  
    return areVectorsEqual(a, b);
}

int main() {
    std::vector<int> numbers1 = {1, 2, 3};
    std::vector<int> numbers2 = {1, 2, 3};
    if (issame(numbers1, numbers2)) {
        std::cout << "Vectors are same." << std::endl;
    } else {
        std::cout << "Vectors are not same." << std::endl;
    }
    return 1;
}