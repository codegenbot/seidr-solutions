long sorted_list_sum(vector<string> lst) {
    long sum = 0;
    for (const string& s : lst) {
        sum += stoll(s);
    }
    return sum;
}