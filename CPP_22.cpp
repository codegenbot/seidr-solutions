```cpp
#include <iostream>
#include <vector>
#include <list>
#include <any>

bool issame(std::vector<int> a, std::vector<int>b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int i = boost::any_cast<int>(value);
            bool isGood = true; // assume good until proven otherwise
            // add your logic here to determine whether the integer is 'good'
            if (!isGood) continue;
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    std::list<std::any> values = {{1,2,3},{4,5,6},{7,8,9}};
    std::vector<int> filtered = filter_integers(values);

    if (!issame({1,2,3},filtered)) {
        for (const auto& value : filtered) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "Vectors are the same.\n";
    }

    return 0;
}