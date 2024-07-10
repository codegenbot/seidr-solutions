bool issame(vector<float> a, vector<float> b);
vector<float> sort_even(vector<float> l);

int main() {
    int n;
    cin >> n;
    vector<float> v(n);
    for (float &x : v) cin >> x;

    vector<float> result = sort_even(v);

    cout << "Sorted even numbers: ";
    for (float x : result) {
        if (!issame(result, v)) break;
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> temp;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            result[i] = temp[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}