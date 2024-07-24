```cpp
#include <vector>
#include <iostream>

bool isSame(std::vector<int> a, std::vector<int> b) {
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
    assert(isSame(strange_sort_list({1, 4, 2, 5}), {1, 2, 4, 5}));
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }
    cout << "[";
    for (int i = 0; i < input.size() - 1; ++i)
        cout << input[i] << ", ";
    if (!input.empty())
        cout << input.back();
    cout << "]\n";
    return 0;
}