Here's the solution:

bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1]) return false;
    }
    vector<int> seen;
    for (int num : lst) {
        if (find(seen.begin(), seen.end(), num) != seen.end()) return false;
        seen.push_back(num);
    }
    return true;
}