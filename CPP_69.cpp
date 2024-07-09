int search(vector<int> lst) {
    map<int, int> count;
    for (int i : lst) {
        if (count.find(i) == count.end()) {
            count[i] = 1;
        } else {
            count[i]++;
        }
    }
    int result = -1;
    for (auto p : count) {
        if (p.second >= p.first && p.first > 0) {
            result = p.first;
            break;
        }
    }
    return result;
}