```cpp
#include <vector>
#include <any>

bool issame(int a, int b) { return a == b; }
bool issame(char a, char b) { return a == b; }

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(const std::any& values) {
    std::vector<int> result;
    for (auto& value : std::any_cast<std::any>(values)) {
        if (std::holds_alternative<int>(value)) {
            int val = std::get<int>(value);
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    std::any values;
    for (auto& value : {3, 'c', 3, 3, 'a', 'b'}) {
        values = value;
    }
    auto output = filter_integers(values);
    assert(output == std::vector<int>({3, 3, 3}));
    return 0;
}