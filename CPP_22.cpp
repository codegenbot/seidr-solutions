#include <any>
#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}