long sorted_list_sum(vector<string> lst) {
    long sum = 0;
    for (const string& str : lst) {
        sum += stoll(str);
    }
    return sum;
}