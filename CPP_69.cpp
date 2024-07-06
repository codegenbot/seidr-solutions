int search(vector<int> lst) {
    int max = -1;
    for (auto num : lst) {
        if (num > 0 && lst.count(num) >= num) {
            max = num;
            break;
        }
    }
    return max;
}