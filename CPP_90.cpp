int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) {
            if (i == 1) return sorted[i];
        }
    }
    return -1; 
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}