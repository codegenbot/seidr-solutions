#include <any>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(std::any values) {
    std::vector<int> result;
    for (auto& value : std::any_cast<std::vector<int>>(values)) {
        if (std::holds_alternative<int>(value)) {
            int val = std::get<int>(value);
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    std::any values = std::make_any(std::vector<int>{{3, 3, 3}});
    auto output = filter_integers(values);
    assert(issame({3, 3, 3}, output));
    return 0;
}