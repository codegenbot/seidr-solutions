Here is the completed code:

int search(vector<int> lst) {
    int max = 0;
    for (auto num : lst) {
        if (num > 0 && num >= count(num)) {
            max = num;
        }
    }
    return max == 0 ? -1 : max;
}