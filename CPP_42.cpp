vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l;
    for(int i = 0; i < result.size(); i++){
        result[i]++;
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    vector<int> l = {1, 2, 3, 4};
    vector<int> incremented = incr_list(l);
    vector<int> original = {2, 3, 4, 5};
    bool same = issame(incremented, original);
    return 0;
}