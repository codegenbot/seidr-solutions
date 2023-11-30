vector<int> parse_music(string music_string){
    vector<int> beats;
    string note;
    for(char c : music_string){
        if(c == 'o'){
            if(note == ".|"){
                beats.push_back(1);
            }else if(note == "o|"){
                beats.push_back(2);
            }else if(note == "o"){
                beats.push_back(4);
            }
            note = "o";
        }else if(c == '|'){
            note = note + c;
        }else if(c == '.'){
            note = ".";
        }
    }
    return beats;
}