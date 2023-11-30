vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for(int i=0; i<music_string.length(); i++){
        if(music_string[i] == 'o'){
            if(note == "o|"){
                beats.push_back(2);
                note = "";
            }
            else if(note == ".|"){
                beats.push_back(1);
                note = "";
            }
            else{
                beats.push_back(4);
                note = "";
            }
        }
        else if(music_string[i] == '|'){
            note += '|';
        }
    }
    return beats;
}