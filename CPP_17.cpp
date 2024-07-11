bool issame(vector<int> b){ 
    for(int i=0; i<b.size()-1; i++){
        if(b[i] != b[i+1]){
            return false;
        }
    }
    return true;
}

vector<int> parse_music(string music_string){ 
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