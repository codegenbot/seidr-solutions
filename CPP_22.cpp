```c++
#include <vector>
#include <list>
#include <any>
#include <assert.h>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        int i = boost::any_cast<int>(value);
        if (!std::holds_alternative<std::monostate>(value)) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
}