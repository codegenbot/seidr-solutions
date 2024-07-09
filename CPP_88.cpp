int main() {
    std::vector<int> input = {21, 14, 23, 11};
    sort_array(input);
    assert(input == std::vector<int>{23, 21, 14, 11});
    return 0;
}