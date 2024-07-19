#include <cassert>
#include <any>
#include <list>
#include <vector>
#include <iostream>

using namespace std;

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) { 
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result.empty() ? vector<int>() : result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

assert(issame({1}, filter_integers({any(1), any(2), any(3), any("hello"), any(4.5)}));