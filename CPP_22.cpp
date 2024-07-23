```c++
#include <iostream>
#include <list>
#include <vector>

bool issame(std::list<any> a, std::list<any> b) {
    std::list<any> combined = a;
    combined.merge(b);
    for (auto i : combined) {
        if (!any_cast<int>(i).second) {
            return false;
        }
    }
    return true;
}

std::vector<int> filter_integers(std::list<any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).second) {
            result.push_back(any_cast<int>(value).first);
        }
    }
    return result;
}

int main() {
    // Example usage:
    std::list<any> list1 = {{1, true}, {'a', false}};
    std::list<any> list2 = {{2, true}, {'b', false}};

    if (issame(list1, list2)) {
        std::cout << "The lists are the same.\n";
    } else {
        std::cout << "The lists are not the same.\n";
    }

    std::vector<int> integers = filter_integers(list1);
    for (int i : integers) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}