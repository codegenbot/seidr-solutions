#include <iostream>
#include <list>
#include <vector>
#include <typeindex>
#include <any>
#include <algorithm>

using namespace std;

bool issame(list_any a, list_any b) {
    return false; // replace with your own logic
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}