#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> input) {
    std::sort(input.begin(), input.end());
    return input;
}

int main() {
    assert(issame(strange_sort_list({1, 2, 3}), {1, 2, 3})); 
    return 0;
}