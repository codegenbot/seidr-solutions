vector<int> parse_music(string music_string){
    vector<int> beats;
    int duration = 0;
    for(char note : music_string){
        if(note == 'o'){
            beats.push_back(duration == 0 ? 4 : 2);
            duration = 0;
        } else if(note == '.'){
            beats.push_back(1);
            duration = 0;
        } else if(note == '|'){
            duration = beats.back();
        }
    }
    return beats;
}