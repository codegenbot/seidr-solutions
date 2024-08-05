vector<int> rolling_max(vector<int> numbers);

bool issame(vector<int> a, vector<int> b) {
    // implement comparison logic here
    return (a == b); // assuming direct comparison is required
}

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int n = numbers.size();
    if(n == 0) return result;
    int max_val = numbers[0];
    result.push_back(max_val);
    for(int i=1; i<n; i++){
        max_val = max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}