bool issame(vector<float> a, vector<float> b);
vector<float> sort_even(vector<float> l);

int main() {
    int n;
    cin >> n;
    vector<float> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<float> result = sort_even(v);
    for (float f : result) {
        cout << f << " ";
    }
    return 0;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            while(j < l.size() && i % 2 != j % 2) {
                j++;
            }
            result[i] = l[j];
            j++;
        } else {
            result[i] = l[i];
        }
    }
    return result;
}