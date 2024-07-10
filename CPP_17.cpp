vector<int> issame(vector<int> a, vector<int> b){
    // Compare vectors a and b and return true if they are the same
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> parse_music(string music_string);

int main() {
    // Main function implementation
    return 0;
}

vector<int> parse_music(string music_string){
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