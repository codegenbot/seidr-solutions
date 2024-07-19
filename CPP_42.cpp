void incr_list(vector<int>& l) {
    for (int &i : l) {
        i++;
    }
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> list = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    incr_list(list);
    assert(issame(list , {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}