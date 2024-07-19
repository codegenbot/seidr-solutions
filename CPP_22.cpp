#include <vector>
#include <list>
#include <variant>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::list<std::variant<int, char>> values);

std::vector<int> filter_integers(std::list<std::variant<int, char>> values) {
    std::vector<int> result;
    for (auto val : values) {
        if (auto ptr = std::get_if<int>(&val)) {
            result.push_back(*ptr);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), { 3, 3, 3 }));
    return 0;
}