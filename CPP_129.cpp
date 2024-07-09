int main() {
    const vector<vector<int>> grid = {{1, 3}, {3, 2}};
    assert(issame(minPath(const_cast<const vector<vector<int>>&>(grid), 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
}