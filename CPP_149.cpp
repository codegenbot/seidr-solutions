int sorted_list_sum(vector<string> lst) {
    int sum = 0;
    for (const auto& str : lst) {
        sum += stol(str);
    }
    return sum;
}