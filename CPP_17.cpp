bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            note += c;
        } else if (c == '|') {
            if (note == "o") {
                beats.push_back(4);
            } else if (note == "o|") {
                beats.push_back(2);
            } else if (note == ".|") {
                beats.push_back(1);
            }
            note = "";
        }
    }
    if (!note.empty()) {
        if (note == "o") {
            beats.push_back(4);
        } else if (note == "o|") {
            beats.push_back(2);
        } else if (note == ".|") {
            beats.push_back(1);
        }
    }
    return beats;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));

    return 0;
}