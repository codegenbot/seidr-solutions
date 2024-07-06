vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            vector<float> evenVals(l.begin() + i, l.begin() + i + 1);
            sort(evenVals.begin(), evenVals.end());
            result.push_back(evenVals[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

bool issame(vector<float> a,vector<float>b){
    return a == b;
}

int main() {
    assert (issame({-12, 2, 3, 4, 5, 8, 11, 12, 23}, sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12})));
    return 0;
}