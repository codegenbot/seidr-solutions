
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

vector<int> parse_music(string music_string){
    vector<int> beats;
    int i = 0;
    while(i < music_string.size()){
        if(music_string[i] == 'o' && i + 2 < music_string.size() && music_string[i+1] == '|'){
            beats.push_back(4);
            i += 2;
        } else if(music_string[i] == 'o' && i + 3 < music_string.size() && music_string[i+1] == '|' && music_string[i+2] == '|'){
            beats.push_back(2);
            i += 3;
        } else if(music_string[i] == '.' && i + 3 < music_string.size() && music_string[i+1] == '|' && music_string[i+2] == '|'){
            beats.push_back(1);
            i += 3;
        }
    }
    return beats;
}