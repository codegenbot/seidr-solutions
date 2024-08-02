#include <vector>
#include <list>
#include <any>

bool compare_vectors(vector<int> a, vector<int> b) {
    // Your comparison logic here
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::equal(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {1, 2, 3}));
    return 0;
}