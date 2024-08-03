#include <vector>
#include <list>
#include <any>
#include <cassert>
#include <typeinfo>

std::vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for (auto val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    assert (issame(filter_integers({3, int('c'), 3, 3, int('a'), int('b')}), {3, 3, 3}));
    return 0;
}