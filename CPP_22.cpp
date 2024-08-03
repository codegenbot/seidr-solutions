#include <vector>
#include <list>
#include <any>
#include <cassert>

std::vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for (auto val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool is_same(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    assert(is_same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), std::vector<int>{3, 3, 3}));
    return 0;
}