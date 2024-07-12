#include <iostream>
#include <list>
#include <vector>
#include <cassert>
#include <any>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}