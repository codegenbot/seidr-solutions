vector<int> incr_list(vector<int> l) {
    for (int i = 0; i < l.size(); ++i) {
        l[i]++;
    }
    return l;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    v = incr_list(v);

    for (int num : v) {
        cout << num << " ";
    }

    return 0;
}