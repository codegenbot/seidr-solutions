bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    std::cin >> n;

    std::vector<int> expected_output;
    for (int i = 0; i < n; ++i) {
        expected_output.push_back(n + 2 * i);
    }

    assert(issame(make_a_pile(n), expected_output));

    return 0;
}