#include <vector>
#include <list>
#include <iostream>
#include <variant>

vector<int> filter_integers(list<int> values) {
    vector<int> result;
    for(auto value : values) {
        if(auto* intValue = std::get_if<int>(&value)){
            result.push_back(*intValue);
        }
    }
    return result;
}

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    auto filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    return isSame(filtered, {3, 3, 3});
}