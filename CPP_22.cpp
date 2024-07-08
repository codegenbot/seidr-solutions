#include <initializer_list>

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
    for (auto& value : std::any_cast<std::variant<std::monostate, int, char>>(values)) {
        if (holds_alternative<int>(value)) {
            int val = get<int>(value);
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    auto values = std::any({std::in_place_index<0>, 3, 
                            std::in_place_index<1>, 'c', 
                            std::in_place_index<0>, 3, 
                            std::in_place_index<0>, 3, 
                            std::in_place_index<1>, 'a', 
                            std::in_place_index<1>, 'b'});
    auto output = filter_integers(values);
    assert(output == std::vector<int>({3, 3, 3}));
    return 0;