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
    vector<int> input = {5, 2, 8, 1, 3, 7, 4, 9, 6};
    vector<int> expected = {2, 5, 8, 1, 3, 7, 4, 6, 9};

    vector<int> result = sort_third(input);

    assert(result == expected);

    return 0;
}
