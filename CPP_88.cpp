int main() {
    std::vector<int> arr = {21, 14, 23, 11};
    sort_array(arr);
    assert(issame(arr, {23, 21, 14, 11}));
    return 0;
}