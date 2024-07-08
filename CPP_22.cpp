```
#include <any>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) { 
    return a == b; 
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
    auto values = std::any({static_cast<int>(3), static_cast<int>('c'), 3, 3, static_cast<int>('a'), static_cast<int>('b')});
    auto output = filter_integers(values);
    assert(issame(output,{3}));
    return 0;
}