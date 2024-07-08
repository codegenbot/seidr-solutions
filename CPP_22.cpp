#include <vector>
#include <list>
#include <any>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (auto& value : values) {
        if (std::any_cast<std::any>(value)) {  // Changed from int to any
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, std::any(), 3, 3, std::any(), std::any()}},{3, 3, 3}) );
    return 0;
}