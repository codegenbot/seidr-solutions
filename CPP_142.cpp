int sum_squares(std::vector<int> lst) {
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i % 3 == 0 && i % 4 != 0) || (i % 4 == 0 && i % 3 != 0))
            total += (i % 4 == 0 ? std::pow(lst[i], 3) : lst[i] * lst[i]);
    }
    return total;
}