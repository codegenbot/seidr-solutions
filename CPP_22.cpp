#include <any>
#include <vector>

bool issame(int a, int b) { return (a == b); }
bool issame(char a, char b) { return (a == b); }

template<typename T>
bool is_same(std::any a, std::any b) {
    if(a.type() != b.type())
        return false;
    return std::any_cast<T>(a) == std::any_cast<T>(b);
}

std::vector<int> filter_integers(std::any values) {
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
    auto values = std::any({std::any(3), std::any(static_cast<int>('c')), std::any(3), std::any(3), std::any(static_cast<int>('a')), std::any(static_cast<int>('b'))}); 
    auto output = filter_integers(values);
    assert(is_same(int, values, {std::any(3), std::any(3), std::any(3)}));
    return 0;
}