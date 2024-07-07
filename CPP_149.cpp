long long sorted_list_sum(vector<string> lst) {
    vector<long long> sum;
    for (const auto& str : lst) {
        long long temp = 0;
        for (char c : str) {
            temp += c - '0';
        }
        sum.push_back(temp);
    }

    sort(sum.begin(), sum.end());

    long long total_sum = 0;
    for (long long num : sum) {
        total_sum += num;
    }

    return total_sum;
}