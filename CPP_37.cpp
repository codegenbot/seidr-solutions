#include <algorithm>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> sort_even(const std::vector<float>& l) {
    std::vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> evens;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evens.push_back(l[j]);
                }
            }
            std::sort(evens.begin(), evens.end());
            result[i] = evens[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    std::vector<float> input({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    std::vector<float> expected({-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});

    if(!issame(sort_even(input), expected)) {
        return 1;
    }

    for (float num : sort_even(input)) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-
12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}