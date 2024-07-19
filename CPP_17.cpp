vector<int> parse_music(string music_string);

bool areEqual(vector<int> a, vector<int> b) {
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

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
            i++;
        } else if (music_string[i] == 'o' && music_string[i + 1] == '|') {
            beats.push_back(2);
            i += 2;
        } else if (music_string[i] == '.' && music_string[i + 1] == '|') {
            beats.push_back(1);
            i += 2;
        }
    }
    return beats;
}

int main() {
    vector<int> music1 = parse_music("o|o");
    vector<int> music2 = parse_music("o.o|o");
    
    if (areEqual(music1, music2)) {
        cout << "Music sequences are equal." << endl;
    } else {
        cout << "Music sequences are not equal." << endl;
    }
    
    return 0;
}