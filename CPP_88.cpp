int main() {
    assert(ArrayUtils::issame(ArrayUtils::sort_array({21, 14, 23, 11}), std::vector<int>{23, 21, 14, 11}));
    return 0;
}