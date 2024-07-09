int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1; // or any other value that represents "None"
    return *next(rbegin(sorted), rend(sorted));
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
}