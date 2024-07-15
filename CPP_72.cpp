bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum > w) {
        return false;
    }
    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> q = {1, 2, 3, 2, 1};
    int w = 10;
    if (will_it_fly(q, w)) {
        cout << "It will fly!" << endl;
    } else {
        cout << "It will not fly!" << endl;
    }
    return 0;
}