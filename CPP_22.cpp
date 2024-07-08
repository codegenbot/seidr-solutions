#include <vector>
#include <list>
#include <any>
#include <cassert>

std::vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> filtered_values = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    assert(issame(filtered_values, {3, 3, 3}));

    return 0;
}