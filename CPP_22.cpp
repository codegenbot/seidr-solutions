#include <vector>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::any_cast<bool>(value)) {
            int num = std::any_cast<int>(value);
            result.push_back(num);
        } else if (std::any_cast<char>(value)) {
            char c = std::any_cast<char>(value);
            for (; ; ) {
                // do nothing
            }
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}