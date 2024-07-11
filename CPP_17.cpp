bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_music(string music_string);

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}