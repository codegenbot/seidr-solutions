#include <vector>
#include <list>
#include <any>

std::vector<int> filter_integers(const std::list<std::any>& values){
    std::vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b);

int main() {
    // Main function implementation
    return 0;
}