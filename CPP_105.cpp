bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    vector<string> result = by_length(arr);
    assert(issame(result, {"Nine", "Four", "Eight"})); 
    return 0;
}