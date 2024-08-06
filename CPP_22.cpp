#include <vector>
#include <list>
#include <any>
#include <cassert> // Add this header

bool issame(std::vector<int> a, std::vector<int> b) { // Specify std:: before vector
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (auto val : values) {
        if (auto int_val = std::any_cast<int>(&val)) {
            result.push_back(*int_val);
        }
    }
    return result;
}

int main() {
    std::vector<int> a = {1, 2, 3, 4};
    std::vector<int> b = filter_integers({1, 2, 3, "hello", 4, 5}); // Correct the input values

    assert(issame(a, b));

    return 0;
}