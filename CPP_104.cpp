bool issame(const std::vector<int>& a, const std::vector<int>& b);

int main() {
    assert(issame(unique_digits({135, 103, 31}), {1, 3, 5}));
    return 0;
}