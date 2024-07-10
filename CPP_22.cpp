#include <vector>
#include <any>
#include <list>
#include <boost/any.hpp>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);
std::vector<int> filter_integers(std::list<std::any> values);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for (auto val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    std::list<std::any> values = {1, 2, 3, "hello", 4, 5};
    std::vector<int> filtered = filter_integers(values);
    
    for (auto num: filtered) {
        std::cout << num << " ";
    }
    
    return 0;
}