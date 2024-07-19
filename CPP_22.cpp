#include <iostream>
#include <vector>
#include <any>
#include <cassert>
#include <typeindex>

std::vector<int> filter_integers(const std::vector<std::any>& values){
    std::vector<int> result;
    for (auto val : values) {
        if (val.type() == typeid(int).hash_code()) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}