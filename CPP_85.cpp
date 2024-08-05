int add(const std::vector<int>& lst) {
    int sum = 0;
    for (size_t i = 0; i < lst.size(); ++i) {
        if (lst[i] % 2 == 0) {
            sum += lst[i];
        }
    }
    return sum;
}