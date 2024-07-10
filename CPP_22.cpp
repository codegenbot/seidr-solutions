#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value) != 0 && boost::any_cast<int>(value) > 5) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {{1}, {2}, {3}, {4}, {5}, {6}, {7}, {8}, {9}};
    std::vector<int> filtered_values = filter_integers(values);
    
    if (!filtered_values.empty()) {
        for (int value : filtered_values) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No values to display." << std::endl;
    }
    
    return 0;
}