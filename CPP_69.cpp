int search(vector<int> lst) {
    int max = 0;
    for (int i : lst) {
        if (i > 0 && i >= count(i)) {
            return i;
        }
        else if (i > max) {
            max = i;
        }
    }
    return -1;
}