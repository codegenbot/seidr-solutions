Here is the completed code:

int search(vector<int> lst) {
    int max_freq = 0;
    for (auto num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num) {
            max_freq = num;
            break;
        }
    }
    return max_freq > 0 ? max_freq : -1;
}