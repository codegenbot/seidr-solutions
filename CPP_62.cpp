bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(derivative({1}), {}));
    return 0;
}