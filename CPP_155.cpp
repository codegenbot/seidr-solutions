vector<int> even_odd_count(int num) {
    int count_even = 0, count_odd = 0;
    string str_num = to_string(abs(num));
    for (char c : str_num) {
        if (c - '0' % 2 == 0)
            ++count_even;
        else
            ++count_odd;
    }
    return {count_even, count_odd};
}