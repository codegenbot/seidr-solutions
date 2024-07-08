bool issame(vector<int> a,vector<int> b){
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    for (int i = 0; i < l.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            sort(l.begin() + i - 2, l.begin() + i + 1);
        }
    }
    return l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}