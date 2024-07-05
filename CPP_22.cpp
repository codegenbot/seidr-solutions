#include <vector>
#include <list>
#include <any>
#include <typeinfo>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    list<any> values = {3, 'c', 3, 3, 'a', 'b'};
    assert(issame(filter_integers(values), {3, 3, 3}));
    cout << "Test passed!" << endl;
    return 0;
}