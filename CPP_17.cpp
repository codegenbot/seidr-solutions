vector<int> parse_music(string music_string){ 
    vector<int> beats;
    int n = music_string.size();
    for(int i=0; i<n; i++){
        if(music_string[i] == 'o'){
            beats.push_back(4);
        }
        else if(music_string[i] == 'o|'){
            beats.push_back(2);
        }
        else if(music_string[i] == '.|'){
            beats.push_back(1);
        }
    }
    return beats;
}