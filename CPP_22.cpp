#include <vector>
#include <list>
#include <any>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::list<std::any> values);

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (auto val : values) {
        if (auto ptr = std::any_cast<int>(&val)) {
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