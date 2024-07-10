```c++
#include <initializer_list>

#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        throw std::runtime_error("Vectors are not the same size");
    }
    for (int i = 0; i < a.size(); i++) {
        std::vector<std::string> temp = {a[i], b[i]};
        std::sort(temp.begin(), temp.end());
        if (temp[0] != temp[1]) {
            throw std::runtime_error("Vectors are not the same");
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> v) {
    std::sort(v.begin(), v.end());
    return v;
}