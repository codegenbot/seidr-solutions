bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> incr_list(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

int main() {
    vector<int> input = {1, 2, 3};
    vector<int> output = incr_list(input);
    if (issame(output, {2, 3, 4})) {
        cout << "Output is correct!" << endl;
    } else {
        cout << "Output is incorrect!" << endl;
    }
    return 0;
}