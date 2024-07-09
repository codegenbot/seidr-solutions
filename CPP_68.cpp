int main() {
    std::vector<int> test1 = {1, 2, 3, 4, 5};
    std::vector<int> test2 = {1, 2, 3, 4, 5};
    std::vector<int> test3 = {5, 4, 3, 2, 1};

    assert(issame(test1, test2));
    assert(!issame(test1, test3));

    return 0;
}