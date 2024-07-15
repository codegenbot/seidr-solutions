assert(below_threshold({1, 2, 3, 4, 5}, 10));
assert(!below_threshold({8, 9, 10, 11, 12}, 7));
assert(below_threshold({0, 0, 0}, 1));
assert(!below_threshold({2, 4, 6, 8, 10}, 3));
assert(!below_threshold({-1, -3, -5}, -10));