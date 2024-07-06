bool issame(const string& s1, const string& s2) {
    vector<string> v1 = split(s1);
    vector<string> v2 = split(s2);

    return total_match(v1, v2).size() > 0;
}

int main() {
    // Code here
}