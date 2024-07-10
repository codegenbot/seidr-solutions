#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filterIntegers(std::vector<int> values) {
    std::vector<int> result;
    for (int value : values) {
        if(value != 0) {
            result.push_back(value);
        }
    }
    return result;
}

std::vector<int> vector1 = {0};
std::vector<int> vector2 = {0};

if(issame(vector1, vector2)) {
    std::cout << "Vectors are same." << std::endl; 
}
else {
    std::cout << "Vectors are not same." << std::endl;
}

std::vector<int> values = {1, 0, 3, 4};
std::vector<int> filtered = filterIntegers(values);
for (int value : filtered) {
    std::cout << value << " ";
}
std::cout << std::endl;

assert(issame(filterIntegers({3, 3, 3}), {3, 3, 3}));