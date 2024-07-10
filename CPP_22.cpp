#include <vector>
#include <list>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::list<std::any> values);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for (auto val : values) {
        if (val.type() == typeid(int)) {
            try {
                result.push_back(std::any_cast<int>(val));
            } catch (const std::bad_any_cast&) {}
        }
    }
    return result;
}