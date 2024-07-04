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

int main() {
    vector<any> input = {3, 'c', 3, 3, 'a', 'b'};
    vector<int> expected_output = {3, 3, 3};
    assert(filter_integers(input) == expected_output);
    cout << "Test passed!" << endl;
    return 0;
}