bool below_threshold(vector<int> l, int t) {
    for (int x : l) {
        if (x >= t)
            return false;
    }
    return true;
}

int main() {
    vector<int> l;
    int t;
    cin >> t;
    l.resize(t);
    for (int i = 0; i < t; i++) {
        cin >> l[i];
    }
    
    if (below_threshold(l, t)) {
        cout << "All numbers below threshold" << endl;
    } else {
        cout << "At least one number above threshold" << endl;
    }

    return 0;
}