bool issame(vector<int> a, vector<int> b) {
    if (a != b)
        return false;
    return true;
}

int main() {
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == {1, 2, 3, 4, 5});
    // ...
}