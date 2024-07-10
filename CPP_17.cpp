vector<int> issame(vector<int> a, vector<int> b);

vector<int> parse_music(std::string music_string);

int main() {
    string music_string;
    cin >> music_string;

    vector<int> music_beats = parse_music(music_string);

    vector<int> example = {1, 2, 3};

    vector<int> result = issame(music_beats, example);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

vector<int> parse_music(string music_string){
    vector<int> result;
    int beats = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats = 4;
        } else if (c == '|') {
            result.push_back(beats);
            beats = 0;
        } else if (c == '.') {
            beats = 1;
        }
    }
    if (beats > 0) {
        result.push_back(beats);
    }
    return result;
}