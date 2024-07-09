int main() {
    std::vector<std::vector<int>> input = {{-3}, {9}, {-1}, {4}, {2}, {31}};
    assert(pairs_sum_to_zero({{input[0][0]}, {input[1][0]}, {input[2][0]}, {input[3][0]}, {input[4][0]}, {input[5][0]}}) == false);
    return 0;
}