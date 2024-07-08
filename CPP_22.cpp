#include <vector>
#include <any>

bool issame(std::vector<any> values) {
    bool result = true;

    for (const auto& value : values) {
        if (!std::any_cast<bool>(value)) continue;
        bool is_true = std::any_cast<bool>(value);
        result &= is_true;
    }

    return result;
}

int main() {
    std::vector<any> a = {3, 'c', 3.0f, 3, 'a', 'b'};
    std::vector<any> b = {static_cast<int>(3), static_cast<int>(3), static_cast<int>(3)};
    assert(issame(a, b)); 
}