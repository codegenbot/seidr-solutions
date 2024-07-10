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