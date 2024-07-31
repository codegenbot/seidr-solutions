// Fix function signature for issame to use std::vector
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// Fix function signature for issame to use std::vector
std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());

    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));

    result.erase(std::unique(result.begin(), result.end()), result.end());

    return result;
}

// Update main function return type as required for C++
int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}