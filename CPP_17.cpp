vector<int> parse_music(string music_string) {
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            if (music_string[i + 1] == '|') {
                beats.push_back(2);
                i += 2;
            } else {
                beats.push_back(4);
                i++;
            }
        } else if (music_string[i] == '.') {
            beats.push_back(1);
            i += 2;
        }
    }
    return beats;
}

bool issame(vector<int> a, vector<int> b) {
    // Add your code here
    
    // Check if the size of the two vectors is different
    if (a.size() != b.size()) {
        return false;
    }
    
    // Compare each element in the vectors
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    // If all elements are the same, return true
    return true;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}