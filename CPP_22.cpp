```cpp
#include <vector>
#include <list>
#include <any>
#include <algorithm>

bool issame(std::vector<int> a,std::vector<int>b){
    return a==b;
}

std::vector<boost::any> inputs = {3, 'c', 3, 3, 'a', 'b' };
std::vector<boost::any> result = filter_integers(inputs);

std::vector<boost::any> filter_integers(std::vector<boost::any> values) {
    std::vector<boost::any> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<int>(value)) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}