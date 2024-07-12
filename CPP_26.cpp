bool areSameVectors(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> test1 = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    assert (areSameVectors(test1, {1, 4, 5}));
    return 0;
}