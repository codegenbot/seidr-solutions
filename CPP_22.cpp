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
    std::vector<any> a = {true, 'c', true, true, true, false};
    std::vector<any> b = {true, true, true};
    assert(issame({a.begin(), a.end()})); // This will be true if all elements in both vectors are same
}