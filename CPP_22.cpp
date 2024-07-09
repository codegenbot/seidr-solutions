#include <vector>
#include <any>
#include <list>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

std::pmr::vector<int> filter_integers(std::list<std::any> values) {
    std::pmr::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == type_index<int>()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main2() {
    assert(issame(filter_integers({3, 97, 3, 3, 98, 99}), vector<int>({3, 3, 3})));
    return 0;
}