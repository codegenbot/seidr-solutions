assert(issame(common({4, 3, 2, 8}, {2, 3, 5}), {2, 3}));
assert(issame(common({1, 2, 3}, {4, 5, 6}), {}));
assert(issame(common({1, 2, 3}, {1, 2, 3}), {1, 2, 3}));