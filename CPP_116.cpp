```cpp
int main_test() {
    std::vector<int> a({1, 2, 4, 8, 16, 32});
    std::vector<int> b = sort_array(a);
    assert(issame(b, {1, 2, 4, 8, 16, 32}));
    return 0;
}