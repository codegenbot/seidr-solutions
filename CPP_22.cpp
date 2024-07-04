#include <iostream>
#include <vector>
#include <any>
#include <typeinfo>
#include <cassert>

using namespace std;

vector<int> filter_integers(const vector<any>& values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    cout << "Test passed." << endl;
    return 0;
}