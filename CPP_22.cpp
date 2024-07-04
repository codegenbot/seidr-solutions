#include <vector>
#include <list>
#include <any>
#include <typeinfo>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> filter_integers(const list<any>& values) {
    vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    list<any> inputs = {any(3), any('c'), any(3), any(3), any('a'), any('b')};
    assert((filter_integers(inputs) == vector<int>{3, 3, 3}));
    cout << "Test passed!" << endl;
    return 0;
}