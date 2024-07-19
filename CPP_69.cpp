int search(std::vector<int> lst) {
    int result = -1;
    for (int num : lst) {
        int frequency = std::count(lst.begin(), lst.end(), num);
        if (num > 0 && frequency >= num && num > result) {
            result = num;
        }
    }
    return result;
}