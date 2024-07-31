bool issame_vectors(const vector<string>& a, const vector<string>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame_vectors(split_words(""), {}));
    assert(issame_vectors(split_words("Hello World"), {"Hello", "World"}));
    
    return 0;
}