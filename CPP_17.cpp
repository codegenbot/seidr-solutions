vector<int> parse_music(string music_string){ 
    vector<int> beats;
    string note = "";
    for(char c : music_string){
        if(c == 'o'){
            if(note == "o"){
                beats.push_back(4);
                note = "";
            } else {
                note = "o";
            }
        } else if(c == '|'){
            if(note == "o"){
                beats.push_back(2);
                note = "";
            } else {
                beats.push_back(1);
                note = "";
            }
        } else if(c == '.'){
            beats.push_back(1);
            note = "";
        }
    }
    return beats;
}