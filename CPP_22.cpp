std::vector<int> filter_integers(std::vector<int> input) {
    std::vector<int> result;
    for (int i : input) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool areEqual(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(areEqual(filter_integers({3, 0, 3, 3, 0, 0}), {3, 3, 3}));
    return 0;