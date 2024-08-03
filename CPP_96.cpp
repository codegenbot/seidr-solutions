// Fix the function signature of is_same from std::vector<int> to std::vector<int>&
bool is_same(std::vector<int>& a, std::vector<int>& b) {
    return a == b;
}

// Use std::initializer_list to compare vectors in is_same
bool is_same(const std::vector<int>& a, const std::initializer_list<int>& b) {
    return a == b;
}

// Fix the assert statement to use std::initializer_list for comparison
assert(is_same(count_up_to(101), {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));