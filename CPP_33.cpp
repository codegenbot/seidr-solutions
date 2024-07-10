vector<int> sort_third(vector<int> l) {
    vector<int> l_copy = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sort(l_copy.begin() + i, l_copy.begin() + i + 3);
        }
    }
    return l_copy;
}

int main() {
    vector<int> input = {9, 7, 1, 5, 8, 2, 6, 4, 3};
    vector<int> expected_output = {1, 7, 9, 2, 5, 8, 3, 4, 6};

    vector<int> result = sort_third(input);

    assert(result == expected_output);
    return 0;
}