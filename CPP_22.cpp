#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back((int)value);
        }
    }
    return result;
}