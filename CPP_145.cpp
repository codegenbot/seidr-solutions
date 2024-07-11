bool issame(std::vector<int> v1, std::vector<int> v2) {
    return v1 == v2;
}

assert(order_by_points({0,6,6,-76,-21,23,4}) == std::vector<int>({-76, -21, 0, 4, 23, 6, 6}));