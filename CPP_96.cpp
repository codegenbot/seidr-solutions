bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

bool count_up_to(vector<int> a, vector<int> b) {
    return issame(a, b);
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    
    bool same = count_up_to(a, b);

    return 0;
}