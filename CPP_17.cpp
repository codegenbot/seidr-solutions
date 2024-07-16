vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    string music_string = "o|o||oo";
    vector<int> beats = parse_music(music_string);
    return 0;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int length = music_string.length();
    for (int i = 0; i < length; i++) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (music_string[i - 1] == 'o') {
                beats.back() = 2;
            } else {
                beats.back() = 1;
            }
        }
    }
    return beats;
}