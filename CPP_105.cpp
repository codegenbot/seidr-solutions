bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sortStrings(vector<string> arr) {
    sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    assert(issame(sortStrings(by_length({9, 4, 8})), sortStrings({"Nine", "Eight", "Four"})));
}