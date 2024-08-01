vector<int> parse_music(string music_string) {
    vector<int> result;
    int count = 0;
    for (char c : music_string) {
        if (c == 'o') {
            count++;
        } else if (c == '|') {
            result.push_back(count);
            count = 0;
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    
    return 0;
}