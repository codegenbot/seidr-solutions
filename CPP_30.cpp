vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l){
        if(i > 0){
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> l;
    float num;
    cout << "Enter numbers (enter 'stop' when done): ";
    while (cin >> num && num != 'stop') {
        l.push_back(num);
    }
    if (l.size() < 2) {
        cout << "Not enough numbers" << endl;
    } else {
        vector<float> pos = get_positive(l);
        if (!issame(pos, l)) {
            cout << "The positive numbers are: ";
            for (float i : pos) {
                cout << i << " ";
            }
            cout << endl;
        } else {
            cout << "All numbers were non-positive" << endl;
        }
    }
    return 0;
}