#include <vector>
#include <list>
#include <any>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            int integer = boost::any_cast<int>(value);
            bool exists = false;
            for (const auto& existing_integer : result) {
                if (issame({integer}, {existing_integer})) {
                    exists = true;
                    break;
                }
            }
            if (!exists) {
                result.push_back(integer);
            }
        }
    }
    return result;
}