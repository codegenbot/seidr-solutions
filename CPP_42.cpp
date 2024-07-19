int main {
    std::vector<int> input = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    incr_list(input);
    assert(issame(input, {6, 3, 6, 3, 4, 4, 10, 1, 124});
    
    return 0;
}