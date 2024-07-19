#include <vector>
#include <any>
#include <cassert>

std::vector<int> filter_integers(std::vector<std::any> values){
    std::vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;

    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]) return false;
    }

    return true;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}