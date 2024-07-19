int main() {
    std::vector<int> input = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> tempList = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> expected = {6, 3, 6, 3, 4, 4, 10, 1, 124};
    incr_list(tempList);
    assert(issame(tempList, expected));
    return 0;
}