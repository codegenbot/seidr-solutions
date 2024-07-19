#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) return array;

    int sum = array.front() + array.back();
    if(sum % 2 == 0)
        sort(array.rbegin(), array.rend());
    else
        sort(array.begin(), array.end());

    return array;
}

int main() {
    std::vector<int> input = {3, 6, 2, 5, 7};
    std::vector<int> expected_even = {7, 6, 5, 3, 2};
    std::vector<int> expected_odd = {2, 3, 5, 6, 7};

    std::vector<int> result = sort_array(input);
    if (issame(result, expected_even) || issame(result, expected_odd)) {
        return 0;
    } else {
        return 1;
    }
}