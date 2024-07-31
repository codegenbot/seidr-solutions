#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto &value : values) {
        if (auto ptr = boost::any_cast<int>(&value)) {
            result.push_back(*ptr);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 3, 3}), {3, 3, 3}));
    return 0;
}