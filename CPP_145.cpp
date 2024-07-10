bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(order_by_points({0, 6, 6, -76, -21, 23, 4}) == vector<int>{-76, -21, 0, 4, 23, 6, 6});
    return 0;
}