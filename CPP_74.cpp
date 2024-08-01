bool issame(const vector<string>& a, const vector<string>& b) {
    size_t total = totalChars(a);
    return total == totalChars(b);
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    
    return 0;
}