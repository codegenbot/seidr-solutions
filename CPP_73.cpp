int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    assert(n > 0);

    std::set<int> setArr(arr.begin(), arr.end());
    return setArr.size() - 1;
}