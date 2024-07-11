bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(bf("Jupiter", "Neptune") == vector<string>({"Earth"})); 
    return 0;
}