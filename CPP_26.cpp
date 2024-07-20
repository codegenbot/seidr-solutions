#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end(), issame), result.end());
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 2, 4, 1, 5};
    std::vector<int> unique_numbers = remove_duplicates(numbers);

    assert(unique_numbers.size() == 5);
    assert(unique_numbers[0] == 1);
    assert(unique_numbers[1] == 2);
    assert(unique_numbers[2] == 3);
    assert(unique_numbers[3] == 4);
    assert(unique_numbers[4] == 5);

    return 0;
}