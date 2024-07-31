#include <vector>
#include <any>
#include <list>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

int main(){
    assert(issame(filter_integers({std::any(3), 'c', std::any(3), std::any(3), 'a', 'b'}), {3, 3, 3}));
    return 0;
}