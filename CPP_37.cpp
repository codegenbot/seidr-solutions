```cpp
bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenVals;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evenVals.push_back(l[j]);
                }
            }
            sort(evenVals.begin(), evenVals.end());
            result[i] = evenVals[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    vector<float> input;
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        float x; cin >> x;
        input.push_back(x);
    }
    vector<float> output = sort_even(input);
    bool same = issame(input, output);
    if(same) cout << "Sorted array is the same.\n";
    else cout << "Sorted array is different.\n";
    
    return 0;