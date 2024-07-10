vector<int> sort_third(vector<int> l) {
    vector<int> l_copy = l;
    for (int i = 0; i < l.size(); i += 3) {
        sort(l_copy.begin() + i, l_copy.begin() + min(i + 3, static_cast<int>(l.size())));
    }
    return l_copy;
}

int main() {
    vector<int> input = {5, 3, 8, 2, 7, 1, 4, 6, 9};
    vector<int> expected_output = {3, 5, 8, 1, 2, 7, 4, 6, 9};

    assert(sort_third(input) == expected_output);

    return 0;
}