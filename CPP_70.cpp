#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;

    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        int max_val = *std::max_element(lst.begin(), lst.end());

        auto it = std::find_if(lst.begin(), lst.end(),
            [&](int x) { return x == min_val; });
        result.push_back(*it);
        lst.erase(it);

        it = std::find_if(lst.begin(), lst.end(),
            [&](int x) { return x == max_val; });
        result.push_back(*it);
        lst.erase(it);
    }

    return result;
}

int main() {
    assert(issame(strange_sort_list({1, 4, 2, 5}), {1, 2, 4, 5}));
    std::vector<int> input;
    int num;
    while (std::cin >> num) {
        input.push_back(num);
    }
    std::cout << "[";
    for (int i = 0; i < input.size() - 1; ++i)
        std::cout << input[i] << ", ";
    if (!input.empty())
        std::cout << input.back();
    std::cout << "]\n";
    return 0;
}