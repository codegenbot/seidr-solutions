// Change function signature from 'vector<int>' to 'std::vector<int>'
bool issame(const std::vector<int>& a, const std::vector<int>& b);

// Include 'std::' namespace before 'vector<int>'
assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 0, 0, 1}));
return 0;