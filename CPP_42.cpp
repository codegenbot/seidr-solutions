bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l;
    for (int i = 0; i < result.size(); i++) {
        result[i]++;
    }
    return result;
}

int main() {
    vector<int> input = {1, 2, 3, 4, 5};
    vector<int> output = incr_list(input);
    // Use the issame function to compare output with the expected result
    if (issame(output, {2, 3, 4, 5, 6})) {
        cout << "Output is correct!";
    } else {
        cout << "Output is incorrect!";
    }
    return 0;
}