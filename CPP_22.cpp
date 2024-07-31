```cpp
bool sameVectors(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

assert(sameVectors(filter_integers({3, 3, 3}), std::vector<int>({3, 3, 3})));