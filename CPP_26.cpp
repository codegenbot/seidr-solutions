```
#include <vector>
#include <algorithm>
#include <functional>

bool int_equal(int a, int b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result;
    for (int num : numbers) {
        if (std::find_if(result.begin(), result.end(),
                         std::bind1st(std::ptr_fun(int_equal), num)) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    vector<int> result = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    assert (issame(vector<int>(result.begin(), result.end()), {1, 4, 5})
    return 0;
}