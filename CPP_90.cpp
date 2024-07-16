int next_smallest(std::vector<int> lst) {
    sort(lst.begin(), lst.end(), std::greater<int>());
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] < lst[i - 1]) {
            return lst[i];
        }
    }
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -45);
    return 0;
}