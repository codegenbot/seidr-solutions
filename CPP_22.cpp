```cpp
#include <any>
#include <vector>

bool issame(int a, int b) { return a == b; }
bool issame(char a, char b) { return a == b; }

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
    auto values = std::any({(int)3, (int)'c', 3, 3, (int)'a', (int)'b'});
    auto output = filter_integers(values);
    assert(issame(output.size(), 3));
    return 0;
}