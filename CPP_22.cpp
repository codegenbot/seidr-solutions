#include <vector>
#include <list>
#include <iostream>
#include <type_traits>

vector<int> filter_integers(const list<int>& values) {
    vector<int> result;
    for(auto value : values) {
        if(std::is_same<decltype(value), int>::value && !std::is_same<decltype(value), char>::value){
            result.push_back(static_cast<int>(value));
        }
    }
    return result;
}

int main() {
    auto filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    return filtered == vector<int>{3, 3, 3};
}