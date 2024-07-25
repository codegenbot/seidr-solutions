#include <vector>
#include <cassert>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; ++i) {
        result.push_back(i);
    }
    return result;
}

std::vector<int> filter_even_numbers(std::vector<int> a) {
    std::vector<int> result;
    for (int i : a) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(filter_even_numbers(generate_integers(17, 89)).empty());
    return 0;
}