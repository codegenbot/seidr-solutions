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

vector<int> sort(vector<int> l) {
    vector<int> l_copy = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sort(l_copy.begin() + i, l_copy.begin() + i + 3);
        }
    }
    return l_copy;
}

int main() {
    // main function implementation
    return 0;
}