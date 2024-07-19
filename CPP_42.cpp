int main() {
    std::vector<int> tempList2 = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    tempList2 = incr_list(tempList2);
    assert(issame(tempList2, std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}