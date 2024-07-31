vector<string> sortStrings(vector<string> arr) {
    sort(arr.begin(), arr.end());
    return arr;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(sortStrings(by_length({9, 4, 8})), sortStrings({"Nine", "Eight", "Four"})));
    // rest of your code...
}