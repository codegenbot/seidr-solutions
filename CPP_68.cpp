bool compareVectors(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(compareVectors(pluck({7, 9, 7, 1}), {}));

    return 0;
}