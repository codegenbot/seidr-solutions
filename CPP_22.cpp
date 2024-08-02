#include <vector>
#include <list>
#include <any>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(std::list<std::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (std::any_cast<int>(value).good()) {
            result.push_back(std::any_cast<int>(value).get());
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 4, 3, 4, 1, 2}), {1, 2, 3, 3, 4, 4}));
    return 0;
}