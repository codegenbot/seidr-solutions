#include <vector>
#include <algorithm>

bool is_same(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> even_values;
    std::vector<float> result = l;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    std::sort(even_values.begin(), even_values.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = even_values[even_index];
            even_index++;
        }
    }

    return result;
}

int main() {
    std::vector<float> a = {1.2, 2.5, 3.7, 4.8};
    std::vector<float> b = {1.2, 2.5, 3.7, 4.8};

    bool same = is_same(a, b);
    std::vector<float> sorted_even = sort_even(a);

    return 0;
}