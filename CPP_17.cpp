vector<int> parse_music(string music_string) {
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|' && music_string[i + 1] == 'o') {
            beats.push_back(2);
            i++;
        } else if (music_string[i] == '|' && music_string[i + 1] == '.') {
            beats.push_back(1);
            i++;
        }
        i++;
    }
    return beats;
}

bool is_same(vector<int> a, vector<int> b) {
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
    string music_string = "o|o|.|o";
    vector<int> result = parse_music(music_string);
    vector<int> expected_result = {4, 2, 1, 4};
    if (is_same(result, expected_result)) {
        cout << "Output matches expected result." << endl;
    } else {
        cout << "Output does not match expected result." << endl;
    }
    return 0;
}