bool issame(const vector<int>& a, const vector<int>& b);

// Place the implementation of the `sort` function here

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}