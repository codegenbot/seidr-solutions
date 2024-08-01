Here is the completed code:

int search(vector<int> lst) {
    int max = 0;
    for (auto x : lst) {
        if (x > 0 && x <= count(lst.begin(), lst.end(), x)) {
            max = x;
        }
    }
    return max == 0 ? -1 : max;
}