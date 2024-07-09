int search(vector<int> lst) {
    map<int, int> count;
    for (int i : lst) {
        if (!count.count(i)) {
            count[i] = 1;
        } else {
            count[i]++;
        }
    }
    int result = -1;
    for (auto p : count) {
        if (p.first > 0 && p.second >= p.first) {
            result = p.first;
            break;
        }
    }
    return result;
}