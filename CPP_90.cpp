int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (auto it = sorted.rbegin(); ++it != sorted.rend(); ) {
        if (*it > sorted[0]) {
            return *it + sorted[0];
        }
    }
    return -1; 
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    // Your other tests and code here.
    return 0;
}