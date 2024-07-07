long sorted_list_sum(vector<string> lst) {
    long sum = 0;
    for (const auto& str : lst) {
        sum += stol(str);
    }
    return sum;
}