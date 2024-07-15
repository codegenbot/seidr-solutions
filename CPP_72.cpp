bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for (size_t i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum > w) {
        return false;
    }
    for (size_t i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Example function call:
    vector<int> q = {1, 2, 3, 3, 2, 1};
    int w = 10;
    bool result = will_it_fly(q, w);
    return 0;
}