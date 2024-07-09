```cpp
int main() {
    std::vector<std::pair<int, int>> input = {{-3, 0}, {-9, 9}, {-1, 1}, {4, -4}, {2, -2}, {31, -31}};
    assert(pairs_sum_to_zero(input) == false);
    return 0;
}