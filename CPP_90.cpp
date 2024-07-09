int next_smallest(vector<int> lst) {
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    if (copy.size() < 2) return -1; 
    return copy[1];
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
}