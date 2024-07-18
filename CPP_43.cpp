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
    std::vector<int> test_case1 = {1, 2, -2, 4, -1};
    std::vector<int> test_case2 = {3, 5, 6, -8, 2};
    
    bool result1 = pairs_sum_to_zero(test_case1);
    bool result2 = pairs_sum_to_zero(test_case2);
    
    return 0;
}