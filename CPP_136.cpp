bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int result = largest_smallest_integers({-6, -4, -4, -3, -100, 1});
    assert(issame(vector<int>({0, 1}), result));  
    return 0;
}