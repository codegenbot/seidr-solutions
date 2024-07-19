#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    int smallest_even = -1;
    int smallest_even_index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)) {
            smallest_even = arr[i];
            smallest_even_index = i;
        }
    }

    if (smallest_even != -1) {
        result.push_back(smallest_even);
        result.push_back(smallest_even_index);
    }

    return result;
}

int main() {
    std::vector<int> input = {1, 3, 5, 2, 4, 6};
    std::vector<int> output = pluck(input);

    assert(issame(output, {2, 3}));

    return 0;
}