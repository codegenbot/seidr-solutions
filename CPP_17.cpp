bool issame(vector<int> b) {
    return (b[0] == b[1] && b[1] == b[2]);
}

vector<int> parse_music(string music_string);

int main() {
    string input;
    cin >> input;
    vector<int> result = parse_music(input);
    for (int i : result) {
        cout << i << " ";
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