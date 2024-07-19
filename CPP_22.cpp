#include <vector>
#include <list>
#include <typeindex>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::list<std::type_index> values);

std::vector<int> filter_integers(std::list<std::type_index> values) {
    std::vector<int> result;
    for (auto val : values) {
        if (val == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({typeid(int), typeid(char), typeid(int), typeid(int), typeid(char), typeid(char)}), { 3, 3, 3 }));
    return 0;
}