```cpp
bool areVectorsEqual(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    auto last = std::unique(result.begin(), result.end());
    result.erase(last, result.end());
    return result;
}

bool vectorsAreSame(std::vector<int>, std::vector<int>) {  
    return areVectorsEqual({}, {});
}

int main() {
    assert(vectorsAreSame({1, 2}, {1, 2}) && vectorsAreSame({1, 2}, {2, 1}));
    return 0;
}