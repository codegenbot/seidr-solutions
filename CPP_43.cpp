bool pairs_sum_to_zero(std::vector<int> l) {
    for (size_t i = 0; i < l.size(); ++i) {
        for (size_t j = i + 1; j < l.size(); ++j) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> test_case1 = {1, 2, 3, -2, -1};
    std::vector<int> test_case2 = {4, 5, 6, 7};
    
    if (pairs_sum_to_zero(test_case1)) {
        std::cout << "Pair summing to zero found in test_case1\n";
    } else {
        std::cout << "No pair summing to zero found in test_case1\n";
    }
    
    if (pairs_sum_to_zero(test_case2)) {
        std::cout << "Pair summing to zero found in test_case2\n";
    } else {
        std::cout << "No pair summing to zero found in test_case2\n";
    }
    
    return 0;
}