#include <vector>
#include <list>
#include <iostream>
#include <type_traits>

using namespace std;

vector<int> filter_integers(list<int> values) {
    vector<int> result;
    for(auto value : values) {
        if(std::is_same<decltype(value), int>::value){
            result.push_back(static_cast<int>(value));
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    auto filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    return issame(filtered, {3, 3, 3});
}