int main() {
    assert(issame(pluck(std::vector<int>{7, 9, 7, 1})), std::vector<int>({7, 1}));
    return 0;
}