bool issame(vector<int> b) {
    for (int i = 1; i < b.size(); ++i) {
        if (b[i] != b[0]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_music(string music_string);

int main() {
    string music_string;
    cin >> music_string;
    vector<int> result = parse_music(music_string);
    for (int beat : result) {
        cout << beat << " ";
    }
    return 0;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            if (note == "o|") {
                beats.push_back(2);
            } else if (note == ".|") {
                beats.push_back(1);
            } else {
                beats.push_back(4);
            }
            note = "";
        } else {
            note += c;
        }
    }
    return beats;
}