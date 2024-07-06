bool below_threshold(vector<int> l, int t) {
    for (int x : l) {
        if (x >= t)
            return false;
    }
    return true;
}

int main() {
    vector<int> l = {1, 2, 3};
    int t = 3;
    cout << boolalpha << below_threshold(l, t);
    return 0;
}