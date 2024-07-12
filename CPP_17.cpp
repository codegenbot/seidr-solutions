bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

void parse_music(string music_string);
vector<int> parse_music(string music_string){
    vector<int> result;
    int length = music_string.length();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            result.push_back(4);
        } else if (music_string[i] == '|') {
            if (music_string[i - 1] == 'o') {
                result[result.size() - 1] = 2;
            } else {
                result.push_back(1);
            }
        }
    }
    return result;
}

assert(issame(parse_music("o|o|o"), {4, 1, 4, 1, 4}));