bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        if ((i + 1) % 3 == 0) {
            vector<int> temp;
            for (int j = i - 2; j <= i; j++) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            for (int j = i - 2; j <= i; j++) {
                l[j] = temp[j - (i - 2)];
            }
        }
    }
    return l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}