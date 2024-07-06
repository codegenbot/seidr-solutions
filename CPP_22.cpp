#include <optional>
#include <vector>

int main() {
    std::vector<int> result = filter_integers({std::make_optional(1), 'c', std::make_optional(3), std::make_optional(4)});
    assert({1, 3} == result);
    return 0;
}