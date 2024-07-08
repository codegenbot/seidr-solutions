#include <vector>
#include <any>

bool vectorIsSame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::any values) {
    std::vector<int> result;
    for (auto& value : std::any_cast<std::vector<any>>(values)) {
        if (std::holds_alternative<int>(value)) {
            int val = std::get<int>(value);
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    auto values = std::any({(int)3, (char)'c', (int)3, (int)3, (char)'a', (char)'b'});
    auto output = filter_integers(std::any_cast<std::vector<int>>(values));
    assert(vectorIsSame(output,{3, 3, 3}));
    return 0;
}