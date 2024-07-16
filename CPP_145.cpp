int main() {
    assert(issame(sort_vector({0, 6, 6, -76, -21, 23, 4}), std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}, std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}