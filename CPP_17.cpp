
vector<int> issame(vector<int> a, vector<int> b) {
    vector<int> result;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    return result;
}

vector<int> parse_music(string music_string);

int main() {
    string input;
    cin >> input;

    vector<int> beats = parse_music(input);

    for (int beat : beats) {
        cout << beat << " ";
    }

    return 0;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note;
    for (char c : music_string) {
        if (c == 'o') {
            note += c;
            beats.push_back(4);
        } else if (c == '|') {
            if (note == "o") {
                beats.back() = 2;
            } else {
                beats.back() = 1;
            }
            note = "";
        } else if (c == '.') {
            beats.push_back(1);
        }
    }
    return beats;
}