bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(vector<string>({"hello", "world"}), vector<string>({"hello", "world"})));
    assert(!issame(vector<string>({"hello"}), vector<string>({"world"})));

    return 0;
}