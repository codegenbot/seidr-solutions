std::vector<int> removeDuplicates(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    std::vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> result = removeDuplicates(input);
    assert(issame(result, {0, 2, 3, 5, 9, 123}));
    return 0;
}