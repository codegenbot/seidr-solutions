int findMax(vector<int> l) {
    size_t n = l.size();
    int max = *max_element(l.begin(), l.end());
    return abs(max - 12);
}

int main() {
    vector<int> v = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int max = *max_element(v.begin(), v.end());
    return abs(max - 12);
}