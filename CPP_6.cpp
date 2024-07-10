```c++
int main() {
    vector<int> expected = {4, 3, 2, 1, 0, -1, -2, -3, -4};
    vector<int> actual = parse_nested_parens("(()(())((()))");
    assert(same(actual, expected));
    return 0;
}