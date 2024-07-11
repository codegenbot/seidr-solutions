vector<int> parse_music(string music_string){
    vector<int> beats;
    int beat = 0;
    for(char c : music_string){
        if(c == 'o'){
            beat = 4;
        }
        else if(c == '|'){
            beats.push_back(beat);
            if(beat == 4){
                beat = 2;
            }
            else if(beat == 2){
                beat = 1;
            }
        }
    }
    beats.push_back(beat);
    return beats;
}