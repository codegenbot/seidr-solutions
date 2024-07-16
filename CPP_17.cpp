vector<int> parse_music(string music_string); // Function prototype

bool issame(vector<int> a, vector<int> b) { // Fixed function signature
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2})); // Fixed assert statement
    return 0;
}