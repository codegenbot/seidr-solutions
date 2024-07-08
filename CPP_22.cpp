#include <vector>
#include <list>
#include <any>
#include <cassert>
#include <typeinfo>

std::vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    assert(issame(filter_integers({std::any(3), std::any('c'), std::any(3), std::any(3), std::any('a'), std::any('b')}), {3, 3, 3}));

    return 0;
}