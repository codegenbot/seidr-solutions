#include <any>
#include <vector>

bool issame(int a, int b) { return a == b; }
bool issame(char a, char b) { return a == b; }

std::vector<int> filter_integers(std::any values) {
    std::vector<int> result;
    for (auto& value : std::any_cast<std::vector>(values)) {
        if (std::holds_alternative<int>(value)) {
            int val = std::get<int>(value);
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    auto values = std::any({3, 'c', 3, 3, 'a', 'b'}); 
    auto output = filter_integers(values);
    assert(issame(output, {3, 3, 3}));
    return 0;
}